from typing import List


def parse_music(music_string: str) -> List[int]:
    durations = {"o": 4, "o|": 2, ".|": 1}
    if not all(note in durations for note in music_string.split("|")):
        return "Invalid input format"

    notes = music_string.split("|")
    return [durations[note] for note in notes]