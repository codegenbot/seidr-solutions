```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    parsed_music = []
    note = ''
    for char in music_string:
        if char in ['o', 'o|']:
            note += char
        elif char == '|':
            if note:
                parsed_music.append(beats_per_note[note])
                note = ''
        else:
            note = '.|'
            if char == '.':
                parsed_music.append(1)
            else:
                parsed_music.append(beats_per_note['.|']]
    if note:
        parsed_music.append(beats_per_note[note])
    return parsed_music