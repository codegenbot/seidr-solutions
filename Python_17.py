from typing import List


def parse_music(music_string: str) -> List[int]:
    music_notes = {"o": 4, "o|": 2, ".|": 1}
    beats = []

    for note in music_string.split():
        if note in music_notes:
            beats.append(music_notes[note])
        else:
            raise ValueError(f"Invalid music note: {note}")

    return beats