from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1, "O|": 6, "O": 8, ".": 0}
    return [notes.get(note, -1) for note in music_string.split()]

# Read input as a string
music_input = input()

# Call the parse_music function and print the output list
print(parse_music(music_input))