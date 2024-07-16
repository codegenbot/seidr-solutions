I removed the extra backticks from the top and bottom of your original code, leaving only:

```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats = [4, 2, 1]
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            result.append(4)
            i += 5
        elif music_string[i:i+3] == 'o|':
            result.append(2)
            i += 3
        elif music_string[i:i+3] == '.|':
            result.append(1)
            i += 3
    return result