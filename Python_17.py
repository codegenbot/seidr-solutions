from typing import List

def parse_music() -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    music_strings = input("Enter music notes sequence separated by spaces: ").split()
    return [notes[note] for music_string in music_strings for note in music_string]