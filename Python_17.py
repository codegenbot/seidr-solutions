```
from typing import List


def parse_music(music_string: str) -> List[int]:
    note_lengths = {"o": 4, "|": 2, ".|": 1}
    result = []
    i = 0
    while i < len(music_string):
        for k in range(i+1, len(music_string)+1):
            if music_string[i:k] in note_lengths:
                result.append(note_lengths[music_string[i:k]])
                i = k-1
                break
    return result