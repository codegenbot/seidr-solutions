from typing import List


def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            if i + 3 <= len(music_string) and music_string[i:i+4] == 'ooo|':
                music_list.append(8)
                i += 4
            else:
                music_list.append(4)
                i += 1
        elif music_string[i:i+2] == 'o|':
            if i + 3 <= len(music_string) and music_string[i:i+4] == 'oo|':
                music_list.append(6)
                i += 4
            else:
                music_list.append(2)
                i += 2
        elif music_string[i:i+3] == '.|':
            if i + 5 <= len(music_string) and music_string[i:i+6] == '..|.||':
                music_list.append(9)
                i += 5
            else:
                music_list.append(1)
                i += 3
    return music_list