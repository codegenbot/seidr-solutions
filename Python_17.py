```
from typing import List


def parse_music(music_string: str) -> List[int]:
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            result.append(4)
            i += 3
        elif music_string[i:i+2] == 'o|':
            result.append(2)
            i += 2
        elif music_string[i:i+3] == '.|__':
            result.append(1)
            i += 3
    return result