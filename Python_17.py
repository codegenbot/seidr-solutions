from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    return [notes[note] for note in music_string.split() if note in notes]

input1 = input()
input2 = input()
input3 = input()

result = parse_music(input1 + input2 + input3)
print(result)