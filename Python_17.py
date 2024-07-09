def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}

    parsed_notes = []
    for note in music_string.split():
        parsed_notes.append(notes[note])

    return parsed_notes