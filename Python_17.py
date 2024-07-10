```
from typing import List


def parse_music(music_string: str) -> List[int]:
    note_lengths = {"o": 4, "|": 2, ".|": 1}
    result = []
    i = 0
    while i < len(music_string):
        length = 1
        while i + length <= len(music_string) and music_string[i:i+length] in note_lengths:
            i += length
            length = note_lengths[music_string[i-1:i]] if i > 0 else 1
    return result