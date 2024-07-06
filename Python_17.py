```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note = '|'
        else:
            note = ''
            j = i
            while j < len(music_string) and (music_string[j].isalnum() or music_string[j] == '.'):
                if music_string[j] != '.':
                    note += music_string[j]
                j += 1
            result.append(beats_per_note[note])
        i = j
    return result