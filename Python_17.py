from typing import List

def parse_music() -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    music_strings = input().split()
    return [notes[note] for notes_string in music_strings for note in notes_string.split()]