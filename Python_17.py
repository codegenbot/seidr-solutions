```
from typing import List

def parse_music(music_string: str) -> List[int]:
    note_lengths = {'o': 4, 'o|': 2, '.': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+5] == '.|.__.':
            i += 5
        elif i + 1 < len(music_string) and music_string[i:i+2] in note_lengths:
            if music_string[i+1] == '|':
                result.append(2 * note_lengths[music_string[i:i+2]])
            else:
                result.append(note_lengths[music_string[i:i+1]])
        i += 1
    return result