def parse_music(music_string: str) -> List[int]:
    beats_per_note = {"o": 4, "o|": 2, ".|": 1}
    music_list = [beats_per_note[notes] for notes in music_string]
    return music_list