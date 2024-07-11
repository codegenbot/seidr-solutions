from typing import List


def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            note_duration = 4
        elif music_string[i:i+2] == 'o|':
            note_duration = 2
        elif music_string[i:i+3] == '.|':
            note_duration = 1
        else:
            break
        for _ in range(note_duration):
            music_list.append(0)
            i += 1
    return music_list