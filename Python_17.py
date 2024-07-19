def parse_music(music_string: str) -> List[int]:
    music_map = {
        "o": 4,
        "o|": 2,
        ".|": 1,
    }

    parsed_notes = []
    for note in music_string.split():
        parsed_notes.append(music_map[note])

    return parsed_notes