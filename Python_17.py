from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1, "O|": 6, "O": 8, ".": 0}
    return [notes.get(note, -1) for note in music_string.split('|')] # Fix: split('|')

input_music = "o|.O"
result = parse_music(input_music)
print(result)