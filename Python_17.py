```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    note = ''
    for char in music_string:
        if char in ['o', 'o|']:
            note += char
        elif char == '|':
            if note:
                result.append(notes[note])
                note = ''
    return result