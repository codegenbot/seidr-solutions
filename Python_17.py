from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"do": 4, "re": 2, "mi": 1, "fa": 3, "so": 5}
    return [notes[note] for note in music_string.split()]

music_string = input("Enter the music notes separated by space: ")
result = parse_music(music_string)
print(result)