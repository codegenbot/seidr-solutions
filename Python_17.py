```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    current_beats = 0
    for char in music_string:
        if char == '|':
            current_beats = beats_per_note[char[:-1]]
        else:
            current_beats = beats_per_note[char]
        result.append(current_beats)
    return result