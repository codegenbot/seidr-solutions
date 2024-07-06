
def parse_music(music_string: str) -> List[int]:
    note_dict = {'o': 4, '|': 2, '.|': 1}
    return [note_dict[note] for note in music_string if note in note_dict]