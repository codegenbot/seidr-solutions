def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note_value = 1
        else:
            note_type = music_string[i:i+2]
            note_value = notes[note_type]
        i += 2
        for _ in range(note_value):
            result.append(0)
    return result