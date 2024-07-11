```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    parsed_notes = []
    current_note = ''
    
    for char in music_string:
        if char not in ['o', '|']:
            continue
        elif char == '|':
            note_type = current_note + char
            parsed_notes.append(beats_per_note[note_type])
            current_note = ''
        else:
            current_note += char
    
    return parsed_notes