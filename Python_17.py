def parse_music(music_string: str) -> List[int]:
    beats_map = {"o": 4, "o|": 2, ".|": 1}
    notes = music_string.split()
    return [beats_map[note] for note in notes]