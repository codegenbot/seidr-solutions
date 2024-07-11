from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {"o": 4, "o|": 2, ".|": 1}
    music_notes = music_string.replace("|", "").split()
    return [beats_per_note[note] for note in music_notes]