from typing import List

def parse_music(music_string: str) -> List[int]:
    note_to_beats = {'o': 4, 'o|': 2, '.|': 1}
    notes = music_string.split()
    return [note_to_beats[note] for note in notes]