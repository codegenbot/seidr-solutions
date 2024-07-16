```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    note = ''
    
    for char in music_string:
        if char in ['o', '|']:
            note += char
        else:
            if note:
                beats.append(notes[note])
                note = ''
            if char == '.':
                beats.append(1)
    
    if note:
        beats.append(notes[note])
    
    return beats