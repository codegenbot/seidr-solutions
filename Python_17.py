from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".": 1}
    if not music_string:
        return []
    if not all(note.strip() in notes for note in music_string.split(",")):
        return []
    return [notes[note.strip()] for note in music_string.split(",")]

input_lines = input("Enter music notes separated by comma: ").strip()
result = parse_music(input_lines)
print(result)