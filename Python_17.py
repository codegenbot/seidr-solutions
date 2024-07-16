from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    return [notes[note] for note in music_string.split() if note in notes]

inputs = [input() for _ in range(3)]
result = parse_music(' '.join(inputs))
print(result)