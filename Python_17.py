def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note_type = music_string[i+1:i+3]
            if note_type in notes:
                result.append(notes[note_type])
            i += 2
        else:
            note_type = music_string[i:i+2]
            if note_type in notes:
                result.append(notes[note_type])
            i += 2
    return result