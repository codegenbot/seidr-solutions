beats = {"o": 4, "o|": 2, ".|": 1}


def parse_music(music_string: str) -> List[int]:
    return [beats[note] for note in music_string.split()]