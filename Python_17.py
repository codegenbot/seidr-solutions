from typing import List

def parse_music() -> List[int]:
    music_string = input("Enter notes: ")
    notes = {"o": 4, "o|": 2, ".|": 1, "oo": 8}
    return [notes[note] for note in music_string.split()]

result = parse_music()
print(result)