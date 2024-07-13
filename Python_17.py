```
from typing import List

def parse_music(music_string: str) -> List[int]:
    if not music_string:
        raise ValueError("Invalid input: Empty string")
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == ' ':
            i += 1
            continue
        elif music_string[i:i+2] == 'o|':
            music_list.append(4)
            i += 2
        elif music_string[i] == '.':
            music_list.append(1)
            i += 1
        elif music_string[i] == 'o':
            if i + 1 < len(music_string) and music_string[i+1] == '|':
                music_list.append(4)
                i += 2
            else:
                music_list.append(4)
                i += 1
        else:
            raise ValueError("Invalid input")
    return music_list