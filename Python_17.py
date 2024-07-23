```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+3] == '..|':
            i += 3
            result.append(beats_per_note['o'])
        elif music_string[i:i+3] == 'ooo':
            i += 3
            result.append(beats_per_note['o'])
        else:
            note_type = music_string[i:i+2]
            i += 2
            if note_type in beats_per_note:
                result.append(beats_per_note[note_type])
    return result