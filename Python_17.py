from typing import List

def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    
    music_notes = music_string.split()
    
    if all(note in notes_duration for note in music_notes):
        return [notes_duration[note] for note in music_notes]
    else:
        return []