```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats = {'o': 4, '.': 2}
    result = []
    note = ''
    
    for char in music_string:
        if char in beats:
            note += char
        else:
            if note:
                result.append(beats[note[0]])
                note = ''
    
    if note:
        result.append(beats[note[0]])
    
    return result