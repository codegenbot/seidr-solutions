def parse_music(music_string: str) -> List[int]:
    beats_mapping = {
        'o': 4,
        'o|': 2,
        '.|': 1
    }
    parsed_notes = []
    
    for note in music_string.split():
        parsed_notes.append(beats_mapping[note])
    
    return parsed_notes