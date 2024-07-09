from typing import List


def parse_music(music_string: str) -> List[int]:
    durations = {"o": 4, "o|": 2, ".|": 1}
    result = []
    for note in music_string.split():
        if note[-1].isdigit():
            result.append(durations[note[:-1]] * int(note[-1]))
        else:
            result.append(durations[note])
    return result