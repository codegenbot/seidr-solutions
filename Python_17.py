```
from typing import List


def parse_music(music_string: str) -> List[int]:
    note_map = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    current_note = ''
    
    for char in music_string:
        if char in ['o', 'o|']:
            beats.append(note_map.get(current_note, 0))
            current_note = char
        elif char == '.':
            beats.append(note_map.get(current_note, 0))
            current_note = '.|'
        else:
            continue
    
    beats.append(note_map.get(current_note, 0))
    
    return beats