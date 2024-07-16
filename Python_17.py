```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = ['o', 'o|', '.|']
    beats_per_note = [4, 2, 1]
    result = []
    i = 0
    while i < len(music_string):
        for note in notes:
            if music_string[i:].startswith(note):
                result.append(beats_per_note[notes.index(note)])
                i += len(note)
                break
    return result