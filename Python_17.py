```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    temp_note = ''
    for char in music_string:
        if char in ['o', '|']:
            if temp_note:
                result.append(notes[temp_note])
                temp_note = ''
            temp_note += char
    if temp_note:
        result.append(notes[temp_note])
    return result