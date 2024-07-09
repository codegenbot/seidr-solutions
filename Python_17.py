from typing import List

def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    notes = music_string.split()
    return [notes_duration[note] for note in notes]