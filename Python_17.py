def parse_music(music_string: str) -> List[int]:
    note_lengths = {"o": 4, "o|": 2, ".|": 1}
    music_notes = [note.strip("|") for note in music_string.split()]
    return [note_lengths[note] for note in music_notes]