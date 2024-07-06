
def parse_music(music_string: str) -> List[int]:
    note_map = {'o': 4, '|': 2, '.': 1}
    notes = music_string.split()
    return [note_map[note] for note in notes]