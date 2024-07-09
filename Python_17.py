from typing import List

def parse_music(music_string: str) -> List[int]:
    if not all(note.strip() in {"o", "o|", ".|", "O|", "O", "."} for note in music_string.split("|")):
        return []
    
    notes = {"o": 4, "o|": 2, ".|": 1, "O|": 6, "O": 8, ".": 0}
    return [notes.get(note, -1) for note in music_string.split("|")]