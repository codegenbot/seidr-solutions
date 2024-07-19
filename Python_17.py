```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.' and i + 3 <= len(music_string) and music_string[i+1] == '|':
            i += 4
            continue
        note = ''
        while i < len(music_string) and (music_string[i] != ' ' or not note):
            note += music_string[i]
            i += 1
        if note in notes:
            result.append(notes[note])
        else:
            raise ValueError('Invalid music string')
    return result