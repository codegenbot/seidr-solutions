```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats = [4, 2, 1]
    result = []
    note = ''
    for char in music_string:
        if char == 'o' or char == '.':
            note += char
        else:
            if note:
                if len(note) == 1:
                    result.append(beats[0])
                elif len(note) == 2:
                    result.append(beats[1])
                else:
                    result.append(beats[2])
                note = ''
    return result