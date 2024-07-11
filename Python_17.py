```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            result.append(1)
            i += 3
        else:
            note = ''
            while i < len(music_string) and (music_string[i] in beats_per_note or music_string[i] == '|'):
                note += music_string[i]
                i += 1
            if note in beats_per_note:
                result.append(beats_per_note[note])
            else:
                if '|' not in note:
                    raise ValueError("Invalid input")
                for char in note:
                    if char != '|':
                        raise ValueError("Invalid input")
                for part in note.split('|'):
                    if len(part) > 1 or part[0] != 'o' and part[0] != '.':
                        raise ValueError("Invalid input")
                    if len(part) == 2 and part[0] == 'o':
                        result.append(beats_per_note['o|'])
                    else:
                        result.append(beats_per_note['.|'])
    return result