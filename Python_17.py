from typing import List


def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i : i + 1] == "o":
            if i + 2 <= len(music_string) and music_string[i + 1 : i + 3] == "|":
                music_list.append(3)
                i += 3
            else:
                music_list.append(4)
                i += 1
        elif music_string[i : i + 4] == ".||||":
            music_list.append(1)
            i += 4
    return music_list