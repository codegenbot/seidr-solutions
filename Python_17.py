from typing import List

def parse_music(music_string: str) -> List[int]:
    note_to_beats = {"o": 4, "o|": 2, ".|": 1}
    return [note_to_beats[note] for note in music_string.split()]