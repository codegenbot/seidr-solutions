```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note = '|'
            i += 3
        else:
            note = ''
            j = i
            while j < len(music_string) and (music_string[j] in beats_per_note or music_string[j] == '|'):
                note += music_string[j]
                j += 1
            result.append(beats_per_note.get(note, 4))
        i = j
    return result