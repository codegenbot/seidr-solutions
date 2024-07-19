```
from typing import List


def parse_music(music_string: str) -> List[int]:
    music_list = []
    beat = 0
    for char in music_string:
        if char == 'o':
            beat += 4
        elif char == 'o|':
            beat += 2
        elif char == '.':
            beat += 1
        elif char == '|':
            music_list.append(beat)
            beat = 0
    music_list.append(beat)
    return music_list