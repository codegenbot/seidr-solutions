```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '|':
            i += 1
        note = ''
        while i < len(music_string) and music_string[i] not in ['o', '|']:
            note += music_string[i]
            i += 1
        if note not in notes:
            note_value = int(note[:-1]) * notes['o']
            result.append(note_value)
        else:
            result.append(notes[note])
    return result