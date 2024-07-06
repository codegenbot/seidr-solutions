```
from typing import List

def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i:i + 2] == "Do":
            music_list.append(1)
            i += 2
        elif music_string[i:i + 3] == "Re|":
            music_list.append(2)
            i += 3
        elif music_string[i:i + 4] == "Mi| ":
            music_list.append(3)
            i += 4
    return music_list