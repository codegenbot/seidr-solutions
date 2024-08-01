```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = ['o', 'o|', '.|']
    beats = [4, 2, 1]
    result = []
    
    for note in music_string.split():
        if note in notes:
            result.append(beats[notes.index(note)])
    
    return result