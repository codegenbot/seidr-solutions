```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+3] == '...':
            result.extend([beats_per_note['o'], beats_per_note['o'], beats_per_note['o']])
            i += 3
        elif music_string[i:i+2] in beats_per_note:
            note_type = music_string[i:i+2]
            i += 2
            result.append(beats_per_note[note_type])
        else:
            i += 1
    return result