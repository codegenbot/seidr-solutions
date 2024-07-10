def parse_music(music_string: str) -> List[int]:
    beats = {"o": 4, "o|": 2, ".|": 1}
    result = []
    notes = music_string.split()
    for note in notes:
        result.append(beats[note])
    return result