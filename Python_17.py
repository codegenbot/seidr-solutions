```
def parse_music(music_string: str) -> List[int]:
    note_dict = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    temp_note = ''
    for char in music_string:
        if char in note_dict:
            if temp_note:
                result.append(note_dict[temp_note])
            temp_note = char
        elif temp_note:
            result.append(note_dict[temp_note])
            temp_note = ''
    if temp_note:
        result.append(note_dict[temp_note])
    return result