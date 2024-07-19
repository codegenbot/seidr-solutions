def parse_music(music_string: str) -> List[int]:
    result = []
    mapping = {"o": 4, "o|": 2, ".|": 1}
    for note in music_string.split():
        result.append(mapping[note])
    return result