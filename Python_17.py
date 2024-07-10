def parse_music(music_string: str) -> List[int]:
    mapping = {"o": 4, "o|": 2, ".|": 1}
    notes = music_string.split()
    return [mapping[note] for note in notes]