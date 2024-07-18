def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}

    parsed_music = []
    notes = music_string.split()
    for note in notes:
        parsed_music.append(notes_duration[note])

    return parsed_music