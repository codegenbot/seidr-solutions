from typing import List


def parse_music(music_string: str) -> List[int]:
    music_list = []
    note_map = {"o": 4, "o|": 2, ".|": 1}

    for char in music_string:
        if char == "|":
            music_list.append(note_map[char[:-1]])
        else:
            music_list.append(note_map[char])

    return music_list