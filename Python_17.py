from typing import List

def parse_music(music_string: str) -> List[int]:
    durations = {"o": 4, "o|": 2, ".|": 1}
    notes = music_string.split('|')
    return [durations[note] for note in notes]

# Prompt user for input
music_input = input("Enter the music string: ")
result = parse_music(music_input)
print(result)