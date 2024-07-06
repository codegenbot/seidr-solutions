from typing import List

def parse_music(music_string: str) -> List[int]:
    beats = [int(note.split("|")[1]) for note in music_string.split()]
    return beats