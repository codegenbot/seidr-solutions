```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    music_list = []
    note = ''
    
    for char in music_string:
        if char in ['o', 'o|']:
            note += char
        elif char == '|':
            music_list.append(beats_per_note[note])
            note = ''
        elif char == '.':
            music_list.append(beats_per_note['.|'])
            note = ''

    return music_list