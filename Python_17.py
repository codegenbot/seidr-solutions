```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    music_list = []
    i = 0
    while i < len(music_string):
        note = ''
        while i < len(music_string) and music_string[i] in ['o', 'o|', '.']:
            note += music_string[i]
            i += 1
        if note:
            music_list.append(beats_per_note[note])
    return music_list