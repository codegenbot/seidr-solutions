from typing import List

def parse_music(music_string: str) -> List[int]:
    durations = {"o": 4, "o|": 2, ".|": 1}
    notes = music_string.split()
    for note in notes:
        if note not in durations:
            return []
    return [durations[note] for note in notes]