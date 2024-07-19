```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    notes = music_string.split()
    parsed_notes = []
    
    for note in notes:
        parsed_notes.append(beats_per_note[note])
    
    return parsed_notes