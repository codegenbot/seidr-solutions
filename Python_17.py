```
from typing import List


def parse_music(music_string: str) -> List[int]:
    note_lengths = {"o": 4, "|": 2, ".|": 1}
    result = []
    i = 0
    while i < len(music_string):
        current_sequence = ""
        j = 1
        while i + j <= len(music_string):
            current_sequence += music_string[i:i+j]
            if current_sequence not in note_lengths and current_sequence[:-1] not in note_lengths:
                break
            j += 1
        result.append(note_lengths[current_sequence])
        i += j
    return result