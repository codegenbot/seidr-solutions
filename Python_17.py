```
from typing import List


def parse_music(music_string: str) -> List[int]:
    note_lengths = {"o": 4, "|": 2, ".|": 1}
    result = []
    i = 0
    while i < len(music_string):
        if i + 2 <= len(music_string) and music_string[i:i+2] in note_lengths:
            result.append(note_lengths[music_string[i:i+2]])
            i += 2
        elif i + 1 <= len(music_string) and music_string[i:i+1] in note_lengths:
            result.append(note_lengths[music_string[i:i+1]])
            i += 1
    return result