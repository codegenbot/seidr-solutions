```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats = [0, 4, 2, 1]  # legend mapping
    result = []
    temp = ''
    for char in music_string:
        if char in ['o', 'o|']:
            temp += '0'
        elif char == '.':
            temp += '1'
        elif char == '|':
            temp += '2'
        else:
            raise ValueError("Invalid character")
    for note in temp:
        result.append(beats[int(note)])
    return result