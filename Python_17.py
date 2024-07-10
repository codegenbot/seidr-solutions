from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1, "o.": 3, "o..": 5, "o.": 1}
    return [notes[note] for note in music_string.split(" ")]

# Read input from user
music_input = input("Enter music notes: ")

# Call the function with user input and print the output
print(parse_music(music_input))