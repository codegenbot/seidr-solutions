def parse_music(music_string: str) -> List[int]:
    note_dict = {"o": 4, "|": 2, ".": 1}
    return [note_dict[c] for c in music_string if c in note_dict]