from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    if all(note in notes for note in music_string.split()):
        return [notes[note] for note in music_string.split()]
    else:
        return []

music_input = input("Enter the music string: ").strip()
result = parse_music(music_input)
print(result)