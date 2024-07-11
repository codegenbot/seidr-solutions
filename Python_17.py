def parse_music(music_string: str) -> List[int]:
    music_notes = {'o': 4, 'o|': 2, '.|': 1}
    output_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            i += 3
        else:
            note_type = music_string[i:i+2]
            output_list.append(music_notes[note_type])
            i += 2
    return output_list