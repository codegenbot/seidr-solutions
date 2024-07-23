```
from typing import List


def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            music_list.append(4)
            i += 2
        elif music_string[i] == 'o':
            music_list.append(1)
            i += 1
        elif music_string[i:i+3] == '.|':
            music_list.append(1)
            i += 3
        else:
            if music_string[i].isdigit():
                note_length = int(music_string[i])
                i += 1
                while i < len(music_string) and music_string[i].isdigit():
                    note_length = note_length * 10 + int(music_string[i])
                    i += 1
                if music_string[i] == 'o':
                    music_list.append(note_length)
                    i += 1
                elif music_string[i:i+2] == '|o':
                    music_list.append(4 * note_length)
                    i += 2
    return music_list