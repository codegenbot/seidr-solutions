def parse_music(music_string: str) -> List[int]:
    notes_duration = {
        'o': 4,
        'o|': 2,
        '.|': 1
    }
    
    parsed_notes = []
    for note in music_string.split():
        parsed_notes.append(notes_duration[note])
    
    return parsed_notes