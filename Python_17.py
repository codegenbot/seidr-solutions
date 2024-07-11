def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    music_list = music_string.split()
    return [notes[note] for note in music_list]