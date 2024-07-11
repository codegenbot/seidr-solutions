from typing import List

def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    return [notes_duration[note] for note in music_string.split()]

# Test the function with valid input
music_input = "o o| o .|"
print(parse_music(music_input))