```
def parse_music(music_string: str) -> List[int]:
    beats = []
    note_map = {'o': 4, 'o|': 2, '.|': 1}
    current_note = ''
    
    for char in music_string:
        if char in note_map:
            if current_note:
                beats.append(note_map[current_note])
            current_note = char
        elif current_note:
            beats.append(note_map[current_note])
            current_note = ''
    
    if current_note:
        beats.append(note_map[current_note])
    
    return beats