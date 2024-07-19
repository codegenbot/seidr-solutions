```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    current_note = ''
    for char in music_string:
        if char != ' ':
            current_note += char
        else:
            if current_note:
                result.append(beats_per_note.get(current_note, 0))
                current_note = ''
    if current_note:
        result.append(beats_per_note.get(current_note, 0))
    return result