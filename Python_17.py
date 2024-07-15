from typing import List
def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    if all(x in notes_duration for x in music_string.split()):
        notes = music_string.split()
        return [notes_duration[note] for note in notes]
    else:
        return []