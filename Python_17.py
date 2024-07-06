```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats = {'o': 4, 'o|': 2, '.|': 1}
    output = []
    
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            i += 3
        else:
            output.append(beats[music_string[i:i+2]])
            i += 2
    
    return output