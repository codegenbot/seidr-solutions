from typing import List


def parse_music(music_string: str) -> List[int]:
    music_dict = {"o": 4, "o|": 2, "|": 1, "-": 0}
    return [music_dict[char] for char in music_string]