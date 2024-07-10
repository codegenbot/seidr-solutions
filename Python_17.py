```
from typing import List


def parse_music(music_string: str) -> List[int]:
    note_lengths = {"o": [4], "|": [2], ".|": [1]}
    result = []
    for note in music_string:
        if note == "o":
            result += [4]
        elif note == "|":
            result += [2]
        elif note == ".|":
            result += [1]
    return result