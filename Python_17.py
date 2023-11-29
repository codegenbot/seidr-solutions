from typing import List


def parse_music(music_string: str) -> List[int]:
    music_dict = {"o": 4, "o|": 2, "|": 1, "-": 0}
    parsed_music = []
    for char in music_string:
        parsed_music.append(music_dict.get(char, -1))
    return parsed_music