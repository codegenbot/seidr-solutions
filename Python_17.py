def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    return [notes_duration.get(note, 0) for note in music_string.split()]