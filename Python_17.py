```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    note = ''
    for char in music_string:
        if char in ['o', 'o|', '.|']:
            if note:
                beats.append(notes[note])
            note = char
        elif char == '|':
            notes[note] //= 2
            note = ''
    if note:
        beats.append(notes[note])
    return beats