```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    music_list = []
    temp_beats = 0
    for note in music_string:
        if note == '|':
            music_list.append(temp_beats)
            temp_beats = 0
        else:
            temp_beats += beats_per_note[note]
    music_list.append(temp_beats)
    return music_list