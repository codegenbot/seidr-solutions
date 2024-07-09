def parse_music(music_string: str) -> List[int]:
    beats_duration = {
        'o': 4,
        'o|': 2,
        '.|': 1
    }
    notes = music_string.split()
    return [beats_duration[note] for note in notes]