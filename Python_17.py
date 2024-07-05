def parse_music(music_string: str) -> List[int]:
    notes = music_string.split()
    beats = {"o": 4, "o|": 2, ".|": 1}
    return [beats[note] for note in notes]