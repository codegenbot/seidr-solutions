from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    return [notes[note] for note in music_string.split() if note in notes]

inputs = []
inputs.append("o o| o| o o|")  # Input for the first line
inputs.append("o o o o o")  # Input for the second line
inputs.append("o| o| o| o| o|")  # Input for the third line

result = parse_music(' '.join(inputs))
print(result)