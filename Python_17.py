from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {"o": 4, "o|": 2, ".|": 1}
    music_notes = [note for note in music_string.split() if note in beats_per_note]
    return [beats_per_note[note] for note in music_notes]