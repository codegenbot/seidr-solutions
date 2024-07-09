from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1, "O|": 6, "O": 8, ".": 0}
    return [notes.get(note, -1) for note in music_string.split()]

# Prompt user for input
music_input = input("Enter a string of music notes: ")

# Call the function with user input
result = parse_music(music_input)
print(result)