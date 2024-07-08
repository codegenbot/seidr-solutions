from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    return [notes[note] for note in music_string.split()]

input_string = "o o| o o o|. o o| o o o|. o o| o o o o o o|. .|"
output = parse_music(input_string)
print(output)