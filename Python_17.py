def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".": 1}
    if not music_string:
        return []
    if not all(note in notes for note in music_string.split(",")):
        return []
    return [notes.get(note, 0) for note in music_string.split(",")]