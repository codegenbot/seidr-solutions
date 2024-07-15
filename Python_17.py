from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    return [notes[note] for note in music_string.strip().split()]

music_input = input("Enter the music string with spaces between notes: ").strip()
result = parse_music(music_input)
print(result)