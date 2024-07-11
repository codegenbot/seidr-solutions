```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if i+3 < len(music_string) and music_string[i+1] in notes:
                beats.append(notes[music_string[i+1:i+3]])
                i += 2
            else:
                beats.append(0)
                i += 4
        else:
            note_type = music_string[i:i+2]
            if note_type in notes:
                beats.append(notes[note_type])
                i += 2
            else:
                beats.append(0)
                i += 2
    return beats