from typing import List

def parse_music(music_string: str) -> List[int]:
    durations = {"o": 4, "o|": 2, ".|": 1}
    notes = music_string.split()
    if any(note not in durations for note in notes):
        raise ValueError("Invalid music string format. Notes should be separated by spaces.")
    return [durations[note] for note in notes]