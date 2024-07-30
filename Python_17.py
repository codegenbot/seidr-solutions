from typing import List
def parse_music(music_strings: List[str]) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    return [notes[note] for music_string in music_strings for note in music_string.split("|")]