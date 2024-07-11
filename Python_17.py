from typing import List

def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    return [notes_duration.get(note, 0) for note in music_string.split()]

# Test the function with valid input
print(parse_music("o o| o .|")) # Output should be [4, 2, 4, 1]