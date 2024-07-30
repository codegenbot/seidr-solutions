from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".": 1}
    if not music_string:
        return []
    if not all(note.replace(" ", "") in notes for note in music_string.split(",")):
        return []
    return [notes[note.replace(" ", "")] for note in music_string.split(",")]


# Read input from user
input_string = input("Enter the music string: ")
# Call parse_music function with user input
result = parse_music(input_string)
print(result)