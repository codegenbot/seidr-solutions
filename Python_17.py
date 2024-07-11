```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    music_list = []
    current_beats = 0
    for note in music_string.split():
        if note in beats_per_note:
            current_beats = beats_per_note[note]
        else:
            music_list.append(current_beats)
            current_beats = 0
    music_list.append(current_beats)
    return music_list