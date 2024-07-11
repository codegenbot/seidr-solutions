from typing import List

def parse_music() -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    music_string = input("Enter music notes: ")
    return [notes_duration[note] for note in music_string.split()]