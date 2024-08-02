def parse_music(music_string: str) -> list:
    durations = {"o": 4, "o|": 2, ".|": 1}
    return [durations[note] for note in music_string.split()]