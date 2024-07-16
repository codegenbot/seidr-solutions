from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    return [notes[note] for note in music_string.split() if note in notes]

music_input = ""
while True:
    line = input().strip()
    if not line:
        break
    
    music_input += line + " "
    
result = parse_music(music_input)
print(result)