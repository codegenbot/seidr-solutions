from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = music_string.replace("o|", "2").replace(".|", "1")
    beats = [4 if note == "o" else int(note) for note in notes.split()]
    return beats