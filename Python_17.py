```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    note = ''
    for char in music_string:
        if char in ['o', '|']:
            note += char
        else:
            if note:
                result.append(notes[note])
                note = ''
            if char == '.':
                result.append(notes['.|'])
    if note:
        result.append(notes[note])
    return result