def parse_music(music_string: str) -> List[int]:
    return [int(note) for note in music_string.split()]