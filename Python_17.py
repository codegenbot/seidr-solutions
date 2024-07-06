```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    note = ''
    for char in music_string:
        if char in ['o', '|']:
            if note:
                beats.append(notes[note])
            note = ''.join([note, char]) if note else char
        elif char == '.':
            note += char
    beats.append(notes[note])
    return beats