```
from typing import List


def parse_music(music_string: str) -> List[int]:
    note_map = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            i += 3
            continue
        note_length = note_map[music_string[i:i+2]]
        result.append(note_length)
        i += 2
    return result