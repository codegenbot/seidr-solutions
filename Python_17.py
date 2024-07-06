def parse_music(music_string: str) -> List[int]:
    note_values = {"o": 4, "|": 2, ".": 1}
    notes = music_string.split()
    return [note_values[note[0]] * int(note[1:]) for note in notes]