def parse_music(music_string: str) -> list[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    note = ''
    for char in music_string:
        if char in ['o', 'o|']:
            note = char
        elif char == '|':
            beats.append(notes[note])
            note = ''
        elif char == '.':
            beats.append(notes['.|'])
            note = ''
    return beats