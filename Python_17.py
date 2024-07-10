from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    return [notes[note] for note in music_string]

# Read input line by line
music_input = ""
while True:
    line = input()
    if not line:
        break
    music_input += line

# Call the function with user input and print the output
print(parse_music(music_input))