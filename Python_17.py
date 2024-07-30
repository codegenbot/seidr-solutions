from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".": 1}
    if not music_string:
        return []
    if not all(note in notes for note in music_string.split(",")):
        return []
    return [notes[note] for note in music_string.split(",")]

input_lines = ["o", "o|", "."]
input_string = ",".join(input_lines)
result = parse_music(input_string)
print(result)