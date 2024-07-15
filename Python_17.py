from typing import List

def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    notes = music_string.split()
    return [notes_duration[note] for note in notes]

# Read input from the user
music_input = input("Enter the music string: ")

# Call the function with the user input and print the result
print(parse_music(music_input))