```
from typing import List

def parse_music(music_string: str) -> List[int]:
    beats = [0]
    for note in music_string.split():
        if note == "o" or note == "o|":
            beats.append(4)
        elif note == ".|":
            beats.append(1)
    if not beats[1:]:
        return []
    return beats[1:]