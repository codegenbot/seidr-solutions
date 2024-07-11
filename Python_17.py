from typing import List

def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    return [notes_duration[note] for note in music_string.split()]

with open("input.txt", "r") as file:
    music_string = file.readline().strip()

result = parse_music(music_string)

with open("output.txt", "w") as file:
    file.write(" ".join(map(str, result)))