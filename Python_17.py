def parse_music(music_string: str) -> List[int]:
    note_map = {"o": 4, "o|": 2, ".|": 1}
    music_list = music_string.split()
    return [note_map[note] for note in music_list]