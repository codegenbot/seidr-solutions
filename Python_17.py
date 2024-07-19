def parse_music(music_string: str) -> List[int]:
    beats_map = {"o": 4, "o|": 2, ".|": 1}
    return [beats_map[note] for note in music_string.split()]