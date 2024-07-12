```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    current_beats = 0
    for note in music_string.split():
        if note == '':
            continue
        beats = beats_per_note[note]
        while current_beats < beats:
            result.append(1)
            current_beats += 1
        current_beats -= beats
    return result