from typing import List


def parse_music(music_string: str) -> List[int]:
    durations = {"o": 4, "o|": 2, ".|": 1}
    if not music_string.endswith("|"):
        raise ValueError("Invalid input format, string must end with '|' character.")

    notes = music_string.split("|")
    return [durations[note] for note in notes if note in durations]