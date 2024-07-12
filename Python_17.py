from typing import List

def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1, "c": 0, "d": 0, "e": 0, "f": 0, "g": 0, "a": 0, "b": 0}
    return [notes_duration.get(note, 0) for note in music_string.split("|")]

music_string = input("Enter the music string: ")
result = parse_music(music_string)
print(result)