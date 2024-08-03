```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    temp_note = ''
    for char in music_string:
        if char in notes:
            if temp_note:
                result.append(notes[temp_note])
            temp_note = char
        elif temp_note:
            result.append(notes[temp_note])
            temp_note = ''
    if temp_note:
        result.append(notes[temp_note])
    return result