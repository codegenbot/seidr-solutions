```
def parse_music(music_string: str) -> list:
    music_list = []
    note_map = {'o': 4, 'o|': 2, '.|': 1}
    current_note = ''
    for char in music_string:
        if char == ' ':
            if current_note:
                music_list.append(note_map[current_note])
                current_note = ''
        else:
            current_note += char
    if current_note:
        music_list.append(note_map[current_note])
    return music_list