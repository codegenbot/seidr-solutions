```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] not in notes:
            return ["Invalid input at position " + str(i) for _ in range(len(beats))]
        beats.append(notes[music_string[i:i+2]])
        i += 2
    return beats