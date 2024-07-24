from typing import List

def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    return [notes_duration[note] for note in music_string.split()]

music_notes = input("Enter music notes separated by spaces: ")
result = parse_music(music_notes)
print(result)