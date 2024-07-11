from typing import list

def parse_music(music_string: str) -> list:
    beats = [
        4 if note == "o" else 2 if note == "o|" else 1 for note in music_string.split()
    ]
    return beats