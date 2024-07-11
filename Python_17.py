from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = music_string.split()
    beats = []
    note_dict = {"o": 4, "o|": 2, ".|": 1}

    for note in notes:
        if note not in note_dict:
            raise ValueError(f"Unknown note {note}")
        beats.append(note_dict[note])

    return beats