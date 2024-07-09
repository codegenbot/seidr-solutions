```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    note = ''
    
    for char in music_string:
        if char not in notes:
            if note:
                beats.append(notes[note])
            note = ''
        else:
            if note:
                beats.append(notes[note])
                note = ''
            note += char
    
    if note:
        beats.append(notes[note])
    
    return beats