import sys
from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    return [notes[note] for note in music_string]

# Read entire input at once
music_input = sys.stdin.read()

# Call the function with user input and print the output
print(parse_music(music_input))