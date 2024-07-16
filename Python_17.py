Here is the completed code:

```
from typing import List


def parse_music(music_string: str) -> List[int]:
    music_notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        note = ''
        if music_string[i] == 'o':
            note = 'o'
            i += 1
        elif music_string[i:i+2] in ['o|', '.|']:
            note = music_string[i:i+2]
            i += 2
        else:
            raise ValueError('Invalid input')
        result.append(music_notes[note])
    return result