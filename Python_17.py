```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    current_note = ''
    
    for char in music_string:
        if char not in beats_per_note:
            continue
        if char != current_note[-1:]:
            if current_note:
                result.append(beats_per_note[current_note])
            current_note = char
        else:
            current_note += char
    
    result.append(beats_per_note[current_note])
    
    return result