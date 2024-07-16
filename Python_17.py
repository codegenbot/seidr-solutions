def parse_music(music_string: str) -> List[int]:
    notes_map = {"o": 4, "o|": 2, ".|": 1}
    notes = music_string.split()
    return [notes_map[note] for note in notes]