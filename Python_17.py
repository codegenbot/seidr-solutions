```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        note = music_string[i:i+3]
        if note in beats:
            result.append(beats[note])
            i += 3
        else:
            i += 1
    return result