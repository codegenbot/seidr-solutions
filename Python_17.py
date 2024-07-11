```
from typing import List


def parse_music(music_string: str) -> List[int]:
    note_beats = {'o': 4, 'o|': 2, '.|': 1}
    beats_per_note = []
    
    for char in music_string:
        if char == '|':
            continue
        beats_per_note.append(note_beats[char])
        
    return beats_per_note