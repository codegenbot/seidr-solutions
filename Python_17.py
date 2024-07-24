def parse_music(music_string: str) -> List[int]:
    music_list = []
    note_map = {"o": 4, "o|": 2, ".|": 1}
    current_note = ""

    for char in music_string:
        if char == " " or char not in note_map:
            if current_note:
                music_list.append(note_map.get(current_note, 0))
            current_note = ""
        else:
            current_note += char

    if current_note:
        music_list.append(note_map.get(current_note, 0))

    return music_list