def parse_music(music_string: str) -> List[int]:
    parts = music_string.split(";")
    return [int(part.strip().split()[1]) for part in parts]