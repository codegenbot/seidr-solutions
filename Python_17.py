```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    note = ''
    for char in music_string:
        if char in notes:
            if note:
                beats.append(notes[note])
            note = char
        elif char == ' ' and note:
            beats.append(notes[note])
            note = ''
    if note:
        beats.append(notes[note])
    return beats