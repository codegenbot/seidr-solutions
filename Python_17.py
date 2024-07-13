def parse_music(music_string: str) -> List[int]:
    duration_map = {"o": 4, "o|": 2, ".|": 1}
    return [duration_map[note] for note in music_string.split()]