```
from typing import list

def parse_music(music_string: str) -> list:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            music_list.append(4)
            i += 1
        elif music_string[i:i+2] == 'o|':
            music_list.append(2)
            i += 2
        elif music_string[i:i+3] == '.|.|.
            music_list.append(1)
            i += 3
        else:
            if music_string[i] in ['o', '|', '.']:
                if i < len(music_string) - 1 and music_string[i+1] not in ['o', '|', '.']:
                    music_list.append(4)
                    i += 1
                elif i < len(music_string) - 2 and music_string[i+1:i+3] not in ['o|', '|.', '..']:
                    music_list.append(2)
                    i += 2
                else:
                    music_list.append(1)
                    i += 1
            else:
                music_list.append(4)
                i += 1
    return music_list