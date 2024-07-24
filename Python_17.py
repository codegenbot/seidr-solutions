from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    return [notes[note] for note in music_string.split()]

user_input = input("Enter the music notes: ")
result = parse_music(user_input)
print(result)