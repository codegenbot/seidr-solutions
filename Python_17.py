```
from typing import List

def parse_music(music_string: str) -> List[int]:
    note_lengths = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+3] == '...':
            i += 6
            result.append(4)
        elif music_string[i:i+3] in note_lengths:
            result.append(note_lengths[music_string[i:i+3][1:]])
            i += 3
        else:
            i += 2
    return result