```
from typing import List


def parse_music(music_string: str) -> List[int]:
    note_durations = {'o': 4, 'o|': 2, '.|': 1}
    beats_per_note = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note_type = music_string[i:i+3]
            i += 3
        else:
            note_type = music_string[i:i+2]
            i += 2
        beats_per_note.append(note_durations[note_type])
    return beats_per_note