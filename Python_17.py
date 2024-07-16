from typing import List


def parse_music(music_string: str) -> List[int]:
    beats = [0] * len(music_string)
    i = 0
    for note in music_string:
        if note == "o":
            beats[i : i + 4] = [1] * 4
        elif note == "o|":
            beats[i : i + 2] = [1] * 2
        elif note == ".|":
            beats[i] = 1
        i += 1
    return [beat for beat in beats if beat > 0]