from typing import List

def parse_music(music_string: str) -> List[int]:
    return [
        4 if char == "o" else 2 if char == "|o" else 1 if char == "|" else 0
        for _, char in enumerate(music_string)
    ]