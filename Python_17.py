from typing import List

def parse_music(music_string: str) -> List[int]:
    beats = {"o": 4, "o|": 2, ".|": 1}
    for note in music_string.split():
        if note not in beats:
            raise ValueError("Invalid note in music_string")
    return [beats[note] for note in music_string.split()]