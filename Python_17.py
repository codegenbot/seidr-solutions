```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {
        'o': 4,
        'o|': 2,
        '.|': 1
    }
    beat_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if i + 3 <= len(music_string) and music_string[i:i+3] in notes:
                beat_list.append(notes[music_string[i:i+3]])
                i += 3
            else:
                raise ValueError("Invalid musical note")
        else:
            if i + 1 <= len(music_string) and music_string[i] in notes:
                beat_list.append(notes[music_string[i]])
                i += 2
            elif i + 2 <= len(music_string) and music_string[i:i+2] in notes:
                beat_list.append(notes[music_string[i:i+2]])
                i += 2
            else:
                raise ValueError("Invalid musical note")
    return beat_list