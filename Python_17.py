from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    music_string = input("Enter music notes separated by spaces: ")
    return [notes[note] for note in music_string.split()]