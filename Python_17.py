from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {".": 0, "o": 4, "|": 1, "O": 8}
    return [notes.get(note, -1) for note in music_string.split('|')]  # Fix: split('|')

input_music = "o|.O"
result = parse_music(input_music)
print(result)