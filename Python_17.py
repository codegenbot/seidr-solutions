from typing import List


def parse_music(music_string: str) -> List[int]:
    music_list = music_string.split()
    note_lengths = {"o": 4, "o|": 2, ".|": 1}
    result = []
    for note in music_list:
        if note == "o":
            result.append(4)
        elif note == "o|":
            result.append(2)
        elif note == ".|":
            result.append(1)
    return result