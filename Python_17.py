Here is the completed code:

```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {
        'o': 4,
        'o|': 2,
        '.|': 1
    }
    result = []
    i = 0
    while i < len(music_string):
        note = music_string[i:i+3]
        if note in notes:
            result.append(notes[note])
            i += 3
        else:
            raise ValueError("Invalid musical notation")
    return result