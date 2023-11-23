from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = music_string.split()
    durations = {"o": 4, "o|": 2, ".|": 1}
    return [durations[note] for note in notes]