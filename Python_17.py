Here is the completed code:

def parse_music(music_string: str) -> List[int]:
    music_notes = {
        'o': 4,
        'o|': 2,
        '.|': 1
    }
    result = []
    note = ''
    for char in music_string:
        if char not in ['o', '|']:
            continue
        if note and note[-1] == '|':
            result.append(2)
        elif note == 'o':
            result.append(4)
        note += char
    return [music_notes[note]]