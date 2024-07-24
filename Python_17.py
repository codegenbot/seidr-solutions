```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    note = ''
    for char in music_string:
        if char in 'o|.' or (note and note not in 'o|' and char == '|'):
            if note:
                beats.append(notes[note])
            note = char
        else:
            note += char
    beats.append(notes[note])
    return beats