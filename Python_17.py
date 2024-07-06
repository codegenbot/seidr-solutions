```
from typing import List

def parse_music(music_string: str) -> List[int]:
    beats = [0]
    for note in music_string.split():
        if note == "o":
            beats.extend([4, 4])
        elif note == "o|":
            beats.extend([2, 2])
        elif note == ".|":
            beats.extend([1, 1])
    return beats[1:]