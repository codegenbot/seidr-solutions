from typing import List


def parse_music(music_string: str) -> List[int]:
    return [
        4 if "o|" in note else 2 if "o" in note else 1
        for note in music_string.split(":")
    ]


music_input = "|oo:||::"

try:
    if (
        not isinstance(music_input, str)
        or len(music_input) < 1
        or any(char not in "|o:" for char in music_input)
    ):
        raise ValueError
    result = parse_music(music_input)
    print(result)
except ValueError:
    print("Invalid input")