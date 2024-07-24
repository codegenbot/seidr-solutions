from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    return [notes[note] for note in music_string.split()]

music_string = input("Enter music notes: ")
result = parse_music(music_string)
print(result)