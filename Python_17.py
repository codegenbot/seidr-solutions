def parse_music(music_string: str) -> List[int]:
    length_mapping = {"o": 4, "o|": 2, ".|": 1}
    return [length_mapping[note] for note in music_string.split()]