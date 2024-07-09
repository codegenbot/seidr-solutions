from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1, "O|": 6, "O": 8, ".": 0}
    music_string = music_string.replace(" ", "")
    
    if set(music_string.split("|")).issubset(notes.keys()):
        return [notes.get(note, -1) for note in music_string.split("|") if note in notes]
    
    return []