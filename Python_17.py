```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    parsed_notes = []
    current_note = ''
    for char in music_string:
        if char in notes:
            if current_note:
                parsed_notes.append(notes[current_note])
            current_note = char
        elif char == ' ' and current_note:
            parsed_notes.append(notes[current_note])
            current_note = ''
    if current_note:
        parsed_notes.append(notes[current_note])
    return parsed_notes