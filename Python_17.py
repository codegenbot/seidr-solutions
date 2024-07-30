from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".": 1}
    if not music_string:
        return []
    music_string = music_string.replace(" ", "").replace("|", "").replace(", ", ",")
    if not all(note.strip().lower() in notes for note in music_string.split(",")):
        return []
    return [notes[note.strip().lower()] for note in music_string.split(",")]

music_string = input("Enter the music notes separated by commas: ")
result = parse_music(music_string)
print(result)