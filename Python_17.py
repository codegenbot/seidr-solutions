```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = music_string.replace('\n', '').replace(' ', '')
    beat_lengths = {
        'o': 4,
        'o|': 2,
        '.|': 1
    }
    result = []
    current_note = ''
    for char in notes:
        if char in ['o', '|']:
            current_note += char
        else:
            if current_note:
                result.append(beat_lengths[current_note])
                current_note = ''
    if current_note:
        result.append(beat_lengths[current_note])
    return result