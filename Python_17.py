from typing import List


def parse_music(music_string: str) -> List[int]:
    return [
        4 if "o|" in note else 2 if "o" in note else 1
        for note in music_string.split(":")
    ]


try:
    music_input = input("Enter the music string: ").strip()
    if not (isinstance(music_input, str) and len(music_input) > 0 and all(char in '|o:' for char in music_input)):
        raise ValueError
    result = parse_music(music_input)
    print(*result, sep=":")
except ValueError:
    print("Invalid input")