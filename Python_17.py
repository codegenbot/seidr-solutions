def parse_music(music_string: str) -> List[int]:
    music_list = []
    note_dict = {"o": 4, "o|": 2, ".|": 1}
    for note in music_string.split():
        if note in note_dict:
            music_list.append(note_dict[note])
    return music_list