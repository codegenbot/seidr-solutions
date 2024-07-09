````
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    note = ''
    for char in music_string:
        if char in notes:
            if note:
                result.append(notes[note])
            note = char
        elif note:
            result.append(notes[note])
            note = ''
    if note:
        result.append(notes[note])
    return result