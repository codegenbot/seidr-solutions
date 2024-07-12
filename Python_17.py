def parse_music(music_string: str) -> List[int]:
    music_notes = {"o": 4, "o|": 2, ".|": 1}
    return [music_notes[note] for note in music_string.split()]