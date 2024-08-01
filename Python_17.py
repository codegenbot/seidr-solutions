```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats = [0, 2, 1]  # Legend: 0 - whole note (4), 1 - half note (2), 2 - quarter note (1)
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '`o`':
            result.append(4)
        elif music_string[i:i+2] == '`o|`':
            result.append(2)
        elif music_string[i:i+3] == '`.|`':
            result.append(1)
        i += 1
    return result