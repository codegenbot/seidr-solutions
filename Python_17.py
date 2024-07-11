def parse_music(music_string: str) -> List[int]:
    music_notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    note = ''
    for char in music_string:
        if char not in ['o', '|']:
            continue
        elif char == '|':
            note += char
            if note in music_notes:
                result.append(music_notes[note])
                note = ''
        else:
            note = char
    return result