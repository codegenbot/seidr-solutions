```
from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = music_string.replace('|', ' ').split()
    beats_per_note = {'o': 4, '.': 1}
    result = []
    for note in notes:
        if note.endswith('o'):
            result.append(beats_per_note['o'])
        elif note.endswith('.'):
            result.append(beats_per_note['.'])
        else:
            result.extend([beats_per_note['o'], beats_per_note['.']])
    return result