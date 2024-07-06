```
from typing import List


def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            music_list.append(2)
            i += 3
        elif music_string[i:i+4] == 'o...|':
            music_list.append(4)
            i += 5
        elif music_string[i:i+7] == '.|..|. |':
            music_list.append(1)
            i += 7
    return music_list