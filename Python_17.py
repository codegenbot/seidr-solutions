```
def parse_music(music_string: str) -> List[int]:
    note_dict = {'o': 4, 'o|': 2, '.|': 1}
    notes = music_string.split()
    result = []
    
    for note in notes:
        if note not in note_dict:
            raise ValueError(f"Invalid note '{note}'")
        result.append(note_dict[note])
    
    return result