```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.' and music_string[i+1] == '|':
            result.append(beats_per_note['.|'])
            i += 2
        elif music_string[i:i+3] in beats_per_note:
            result.append(beats_per_note[music_string[i:i+3]])
            i += 3
        else:
            i += 1
    return result