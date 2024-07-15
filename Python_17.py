from typing import List

def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "O": 2, ".": 1}

    if all(note in notes_duration for note in music_string):
        return [notes_duration[note] for note in music_string]
    else:
        return []