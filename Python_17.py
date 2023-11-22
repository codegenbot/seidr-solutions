from typing import List


def parse_music(music_string: str) -> List[int]:
    return [
        4 if "o|" in note else 2 if "o" in note else 1
        for note in music_string.split(":")
    ]


def main():
    music_input = input("Enter the music string: ")
    if music_input and music_input[0].isalpha() and music_input[-1].isdigit():
        result = parse_music(music_input)
        print(result)
    else:
        print(
            "Invalid input. Music string should start with a letter and end with a digit."
        )


main()