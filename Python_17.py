```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if i + 2 <= len(music_string) and music_string[i:i+3] in notes:
                i += 2
                beats.append(notes['.|'])
            else:
                i += 1
                beats.append(1)
        elif music_string[i] == 'o':
            if i + 1 < len(music_string) and music_string[i:i+2] in notes:
                i += 1
                beats.append(notes['o'])
            else:
                i += 1
                beats.extend([4]*2)
        elif music_string[i] == 'o|':
            if i + 2 <= len(music_string) and music_string[i:i+3] in notes:
                i += 2
                beats.append(notes['o|'])
            else:
                i += 1
                beats.extend([2]*2)
    return beats