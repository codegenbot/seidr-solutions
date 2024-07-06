Here is the completed code:

def parse_music(music_string: str) -> List[int]:
    beats = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    note = ''
    for char in music_string:
        if char in ['o', 'o|']:
            note += char
        else:
            if note:
                result.append(beats[note])
                note = ''
    if note:
        result.append(beats[note])
    return result