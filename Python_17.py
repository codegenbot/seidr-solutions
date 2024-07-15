from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    return [notes[note] for note in music_string.split('|')]

music_input = raw_input().strip()
result = parse_music(music_input)
print(result)