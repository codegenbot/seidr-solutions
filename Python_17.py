def parse_music(music_string: str) -> List[int]:
    note_lengths = {"o": 4, "o|": 2, ".|": 1}
    return [note_lengths[note] for note in music_string.split()]