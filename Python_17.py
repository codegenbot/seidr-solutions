def parse_music(music_string: str) -> List[int]:
    beats = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note_length = 3
        else:
            note_length = 2
        note = music_string[i:i+note_length]
        i += note_length
        if note in beats:
            result.append(beats[note])
    return result