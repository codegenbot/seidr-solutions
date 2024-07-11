```
from typing import List


def parse_music(music_string: str) -> List[int]:
    music_list = []
    beat_count = 0
    notes = {'o': 4, 'o|': 2, '.|': 1}
    
    for char in music_string:
        if char == 'o' or char == 'o|':
            music_list.append(beat_count)
            beat_count = notes[char]
        elif char == '|':
            music_list.append(beat_count)
            beat_count = 0
        else:
            music_list.append(beat_count)
            beat_count = 1
    
    if beat_count > 0:
        music_list.append(beat_count)

    return music_list