from typing import List


def parse_music(music_string: str) -> List[int]:
    return [
        4 if "o|" in note else 2 if "o" in note else 1
        for note in music_string.split(":")
    ]


# Code below is added to get the input in the correct format
music_input = input()
result = parse_music(music_input)
print(result)