def parse_music(music_string: str) -> List[int]:
    notes = music_string.split()
    beat_values = {"o": 4, "o|": 2, ".|": 1}
    return [beat_values[note] for note in notes]