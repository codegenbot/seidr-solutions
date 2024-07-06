```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            for _ in range(3):
                i += 1
        else:
            note = ''
            while i < len(music_string) and (music_string[i].isalnum() or music_string[i] == '|'):
                note += music_string[i]
                i += 1
            result.append(beats_per_note.get(note, 4))
    return result