def parse_music(music_string: str) -> List[int]:
    beats_dict = {"o": 4, "o|": 2, ".|": 1}
    return [beats_dict[note] for note in music_string.split()]