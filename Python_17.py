from typing import List


def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            if i + 1 < len(music_string) and music_string[i+1] == '|':
                music_list.append(2)
                i += 2
            else:
                music_list.append(4)
                i += 1
        elif music_string[i:i+3] == '.|.|':
            music_list.append(1)
            i += 3
    return music_list