from typing import List


def parse_music(music_string: str) -> List[int]:
    note_duration = {'o': 4, 'o|': 2, '.|': 1}
    beats_per_note = []
    
    for char in music_string:
        if char == '|':
            beats_per_note.append(note_duration.get('o|', 0))
        elif char == '.':
            beats_per_note.append(note_duration.get('.|', 0))
        else:
            beats_per_note.append(note_duration.get(char, 4))
    
    return beats_per_note