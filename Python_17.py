from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    return [notes[note] for note in music_string]


music_string = input().strip().split()
result = parse_music(music_string)
print(result)