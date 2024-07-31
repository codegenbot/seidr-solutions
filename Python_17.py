```
from typing import List


def parse_music(music_string: str) -> List[int]:
    music_notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    current_note = ''
    
    for char in music_string:
        if char not in ['o', 'o|', '.|']:
            if char == '|':
                if current_note in music_notes:
                    result.append(music_notes[current_note])
                current_note = ''
        else:
            current_note += char
    
    if current_note in music_notes:
        result.append(music_notes[current_note])
    
    return result