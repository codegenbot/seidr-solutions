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
                note_type = length
                while i < len(music_string) and music_string[i] == length[0]:
                    i += 1 
                result.append(note_lengths[note_type])
                found = True
                break
        if not found:
            i += 1
    return result