from typing import List


def parse_music(music_string: str) -> List[str]:
    notes = {"o": "4", "o|": "2", ".|": "1"}
    return [str(notes[note]) for note in music_string.split()]