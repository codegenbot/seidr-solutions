from typing import List

def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    return [notes_duration.get(note, 0) for note in music_string.split()]

music_string = input("Enter notes separated by spaces (e.g., o o| o| .|): ")
result = parse_music(music_string)
print(result)