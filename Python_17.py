```
def parse_music(music_string: str) -> List[int]:
    music_list = []
    note_dict = {'o': 4, 'o|': 2, '.|': 1}
    temp_note = ''
    for char in music_string:
        if char == 'o' or char == 'o|':
            temp_note += char
        else:
            if temp_note:
                music_list.append(note_dict[temp_note])
                temp_note = ''
            if char == '|':
                temp_note += char
            elif char == '.':
                music_list.append(note_dict['.||'])
    if temp_note:
        music_list.append(note_dict[temp_note])
    return music_list