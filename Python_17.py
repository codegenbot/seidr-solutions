```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    note = ''
    
    for char in music_string:
        if char not in notes:
            if char == '-':
                continue
            else:
                i = 0
                while i < len(note):
                    if note[i] == char:
                        note = note[:i] + '|' + note[i+1:]
                    i += 1
        elif char != note:
            if note:
                beats.append(notes[note])
            note = char
        else:
            note += char
    
    beats.append(notes[note])
    
    return beats