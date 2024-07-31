```
def parse_music(music_string: str) -> List[int]:
    music_list = []
    note_dict = {'o': 4, 'o|': 2, '.|': 1}
    temp_note = ''
    for char in music_string:
        if char in note_dict:
            if temp_note:
                music_list.append(note_dict[temp_note])
            temp_note = char
        elif char == ' ':
            continue
        else:
            return []
    music_list.append(note_dict[temp_note])
    return music_list