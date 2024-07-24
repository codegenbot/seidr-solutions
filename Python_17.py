```Python
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '|':
            i += 1
        elif music_string[i:i+2] in notes:
            beats.append(notes[music_string[i:i+2]])
            i += 2
        else:
            return []
    return beats