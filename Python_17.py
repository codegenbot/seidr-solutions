```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []  
    note = ''
    
    for char in music_string:
        if char not in notes:
            continue
        if char != note:
            if note:
                beats.append(notes[note])
            note = char
        else:
            note += char
    
    beats.append(notes[note])
    
    return beats