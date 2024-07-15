from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    if " " in music_string:
        return "Invalid input format. Please provide music notes without spaces."
    if all(note in notes for note in music_string):
        return [notes[note] for note in music_string]
    else:
        return "Invalid input format. Please provide valid music notes."

music_string = input("Enter music notes: ")
result = parse_music(music_string)
print(result)