from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".": 1}
    if not music_string:
        return []
    if not all(note.strip().lower() in notes for note in music_string.split(",")):
        return []
    return [notes[note.strip().lower()] for note in music_string.split(",")]

result = parse_music("o, O| ,.")
print(result)