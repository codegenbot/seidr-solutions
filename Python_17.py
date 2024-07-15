from typing import List

def parse_music() -> List[int]:
    music_string = input()
    notes = {"o": 4, "o|": 2, ".|": 1}
    return [notes[note] for note in music_string.strip().split()]