```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    parsed_music = []
    temp_note = ''
    for char in music_string:
        if char in notes:
            if temp_note:
                parsed_music.append(notes[temp_note])
                temp_note = ''
            temp_note += char
    if temp_note:
        parsed_music.append(notes[temp_note])
    return parsed_music