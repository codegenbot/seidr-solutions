```python
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '|':
            i += 1
        note = ''
        while i < len(music_string) and (music_string[i] not in notes or music_string[i-1] == '|'):
            note += music_string[i]
            i += 1
        result.append(notes.get(note, 0))
    return result