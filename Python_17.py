```
from typing import List


def parse_music(music_string: str) -> List[int]:
    music_list = []
    beat_count = 0
    note_map = {'o': 4, 'o|': 2, '.|': 1}

    for char in music_string:
        if char in note_map:
            music_list.append(note_map[char])
            beat_count = 0
        else:
            beat_count += 1

    return music_list