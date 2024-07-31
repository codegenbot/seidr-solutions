```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    current_note = ''
    
    for char in music_string:
        if char != ' ' and char != '|':
            current_note += char
        else:
            if current_note:
                result.append(notes.get(current_note, 0))
                current_note = ''
    
    if current_note:
        result.append(notes.get(current_note, 0))
    
    return result