```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    note = ''
    for char in music_string:
        if char in ['o', 'o|', '.|']:
            if note:
                result.append(beats_per_note[note])
            note = char
        elif char == '|':
            note += char
    if note:
        result.append(beats_per_note[note])
    return result