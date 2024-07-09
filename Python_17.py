from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {"o|": 2, ".|": 1, "o ": 4}
    music_notes = [note.strip("|") for note in music_string.split()]
    return [
        beats_per_note[note] if note in beats_per_note else 4 for note in music_notes
    ]