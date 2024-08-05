from typing import List


def parse_music(music_string: str) -> List[int]:
    durations = {"o": 4, "o|": 2, ".|": 1}
    
    if not music_string or "|" not in music_string:
        raise ValueError("Invalid music string format")
    
    notes = music_string.split("|")
    return [durations[note] for note in notes]