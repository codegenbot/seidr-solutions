from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1, "O|": 6, "O": 8, ".": 0}
    splitted_notes = [x if not x[-1].isdigit() else x + "|" for x in music_string.split("|")]
    return [notes.get(note, -1) for note in splitted_notes if note in notes]