def parse_music(music_string: str) -> List[int]:
    durations = {"o": 4, "o|": 2, ".|": 1}

    result = []
    music_notes = music_string.split()

    for note in music_notes:
        result.append(durations[note])

    return result