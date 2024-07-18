def parse_music(music_string: str) -> List[int]:
    note_duration = {"o": 4, "o|": 2, ".|": 1}
    return [note_duration[note] for note in music_string.split()]