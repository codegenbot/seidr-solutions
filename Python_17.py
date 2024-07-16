```
from typing import List


def parse_music(music_string: str) -> List[int]:
    note_lengths = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    temp = ''
    
    for char in music_string:
        if char in note_lengths:
            if temp:
                result.append(note_lengths[temp])
            temp = char
        elif temp:
            temp += char
    if temp:
        result.append(note_lengths[temp])
    
    return result