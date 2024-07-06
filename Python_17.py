def parse_music(music_string: str) -> List[int]:
    note_map = {"o": 4, "o|": 2, ".|": 1}
    notes = []
    for note in music_string.split():
        notes.append(note_map[note])
    return notes