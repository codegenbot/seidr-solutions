```
from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        note = ''
        while music_string[i] in ['o', '|']:
            note += music_string[i]
            i += 1
        if note:
            result.append(notes[note])
        else:
            result.append(0)
        i += 1
    return result