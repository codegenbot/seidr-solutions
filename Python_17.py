from typing import List

def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    notes = music_string.split()
    if all(note in notes_duration for note in notes):
        return [notes_duration[note] for note in notes]
    else:
        return []

music_string = input()
result = parse_music(music_string)
print(result)