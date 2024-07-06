def parse_music(music_string: str) -> List[int]:
    note_dict = {"o": 4, "|": 2, ".|": 1}
    notes = music_string.split()
    return [note_dict[note] for note in notes]