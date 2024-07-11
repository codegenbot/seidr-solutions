```
def parse_music(music_string: str) -> List[int]:
    result = []
    note_dict = {'o': 4, 'o|': 2, '.|': 1}
    current_note = ''
    for char in music_string:
        if char == ' ':
            result.append(note_dict.get(current_note, 0))
            current_note = ''
        elif char in note_dict:
            current_note += char
    result.append(note_dict.get(current_note, 0))
    return result