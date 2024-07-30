from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".": 1}
    if not music_string:
        return []
    if not all(note.strip().lower().replace(" ", "").replace("|", "") in notes for note in music_string.split(",")):
        return []
    return [notes[note.strip().lower().replace(" ", "").replace("|", "")] for note in music_string.split(",")]

result = parse_music("note1,note2,note3")
print(result)