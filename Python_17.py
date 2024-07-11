def parse_music(music_string: str) -> List[int]:
    note_dict = {"o": 4, "o|": 2, ".|": 1}
    music_notes = music_string.split()
    return [note_dict[note] for note in music_notes]