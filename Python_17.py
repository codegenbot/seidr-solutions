from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".": 1}
    if not music_string:
        return []
    if not all(note.replace(" ", "") in notes for note in music_string.split(",")):
        return []
    return [notes[note.replace(" ", "")] for note in music_string.split(",")]

input_lines = []
while True:
    line = input()
    if line:
        input_lines.append(line)
    else:
        break

input_string = ",".join(input_lines)
result = parse_music(input_string)
print(result)