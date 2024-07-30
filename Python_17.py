from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    return [notes[note] for note in music_string.split(",")]


# Read input from the user
music_input = input("Enter the music notes separated by comma: ")

# Call the function with the user input
result = parse_music(music_input)
print(result)