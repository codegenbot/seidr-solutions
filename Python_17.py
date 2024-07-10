```
from typing import List


def parse_music(music_string: str) -> List[int]:
    note_lengths = {"o": 4, "|": 2, ".|": 1}
    result = []
    i = 0
    while i < len(music_string):
        found = False
        for length in sorted(note_lengths.keys(), key=lambda x: -len(x)):
            if music_string.startswith(length, i):
                result.append(note_lengths[length])
                i += len(length)
                found = True
                break
        if not found:
            i += 1 
    return result