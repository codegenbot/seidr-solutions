from typing import List

def parse_music(music_string: str) -> List[int]:
    durations = {"o": 4, "o|": 2, ".|": 1}
    
    notes = music_string.split()
    valid_notes = set(["o", "o|", ".|"])
    
    if all(note in valid_notes for note in notes):
        return [durations[note] for note in notes]
    else:
        return []