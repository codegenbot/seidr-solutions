from typing import List


def parse_music(music_string: str) -> List[int]:
    return [
        4 if "o|" in note else 2 if "o" in note else 1
        for note in music_string.split(":")
    ]


def main():
    music_input = input().strip()
    if music_input[0].isalpha() and music_input[-1].isdigit():
        result = parse_music(music_input)
        print(result)


main()