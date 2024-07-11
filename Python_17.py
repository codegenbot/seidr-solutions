```
from typing import List


def parse_music(music_string: str) -> List[int]:
    music_notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    i = 0
    while i < len(music_string):
        note = ''
        while i < len(music_string) and music_string[i] != '|':
            note += music_string[i]
            i += 1
        if i < len(music_string):
            i += 1
        beats.append(music_notes[note])
    return beats