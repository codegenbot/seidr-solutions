def parse_music(music_string: str) -> List[int]:
    notes = music_string.split()
    beat_duration = {'o': 4, 'o|': 2, '.|': 1}
    return [beat_duration[note] for note in notes]