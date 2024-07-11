```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            i += 3
        elif music_string[i:i+2] in beats_per_note:
            result.append(beats_per_note[music_string[i:i+2]])
            i += 2
        else:
            note = ''
            while i < len(music_string) and (music_string[i] in beats_per_note or music_string[i] == '|'):
                if music_string[i:i+2] in beats_per_note:
                    result.append(beats_per_note[music_string[i:i+2]])
                    i += 2
                    break
                note += music_string[i]
                i += 1
    return result