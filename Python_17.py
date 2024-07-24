def parse_music(music_string: str) -> List[int]:
    beats = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note_length = 4
        else:
            note = music_string[i:i+2]
            note_length = beats[note]
        i += note_length
        if i < len(music_string) and music_string[i-1] != '.':
            result.append(note_length)
    return result