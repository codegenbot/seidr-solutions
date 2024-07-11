```
def parse_music(music_string: str) -> List[int]:
    music_notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    note = ''
    for char in music_string:
        if char not in ['o', '|']:
            if note:
                if note == 'o':
                    result.append(4)
                elif note == 'o|':
                    result.append(2)
                else:
                    result.append(1)
                note = ''
        else:
            note += char
    if note:
        if note in music_notes:
            result.append(music_notes[note])
        else:
            result.append(1)
    return result