def parse_music(music_string: str) -> List[int]:
    durations = {"o": 4, "o|": 2, ".|": 1}
    return [durations[note] for note in music_string.split()]