```
def parse_music(music_string: str) -> List[int]:
    music_notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    note = ''
    for char in music_string:
        if char not in ['o', '|']:
            if note:
                result.append(music_notes[note])
                note = ''
        else:
            note += char
    if note:
        result.append(music_notes[note])
    return result