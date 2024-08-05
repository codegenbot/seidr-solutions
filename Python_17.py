from typing import List


def parse_music(music_string: str) -> List[int]:
    if not music_string or not all(
        note in ["o", "o|", ".|"] for note in music_string.split("|")
    ):
        return []

    durations = {"o": 4, "o|": 2, ".|": 1}
    notes = music_string.split("|")
    return [durations[note] for note in notes]