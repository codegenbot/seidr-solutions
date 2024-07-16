```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    current_beats = 0
    for char in music_string:
        if char == '|':
            current_beats = int(''.join(filter(str.isdigit, ''.join(map(str, [char] + ['o'] * (current_beats > 0))))))
            result.append(current_beats)
            current_beats = 0
        elif char in beats_per_note:
            current_beats += beats_per_note[char]
    return result