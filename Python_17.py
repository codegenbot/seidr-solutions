from typing import List


def parse_music() -> List[int]:
    music_string = list(input())
    return [4 if note == "o" else 2 if note == "o|" else 1 for note in music_string]