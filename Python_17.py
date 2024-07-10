def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    parsed_notes = [notes_duration[note] for note in music_string.split()]
    return parsed_notes