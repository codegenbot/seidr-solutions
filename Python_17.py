```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {
        'o': 4,
        'o|': 2,
        '.|': 1
    }
    beats = []
    current_note = ''
    for char in music_string:
        if char in notes:
            if current_note:
                beats.append(notes[current_note])
            current_note = char
        elif char == ' ':
            continue
        else:
            raise ValueError("Invalid input")
    if current_note:
        beats.append(notes[current_note])
    return beats