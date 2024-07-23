from typing import List


def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    while i < len(music_string):
        if i + 1 < len(music_string) and music_string[i:i+2] == 'o|':
            music_list.append(3)
            i += 2
        elif i + 3 < len(music_string) and music_string[i:i+4] == '.||||':
            music_list.append(1)
            i += 4
        elif i < len(music_string) and music_string[i] == 'o':
            music_list.append(4)
            i += 1
    return music_list