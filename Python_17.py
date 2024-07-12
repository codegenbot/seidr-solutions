```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    parsed_beats = []
    note = ''
    for char in music_string:
        if char in ['o', 'o|', '.|']:
            if note:
                parsed_beats.append(beats_per_note[note])
            note = char
        elif char == '|':
            parsed_beats.append(beats_per_note[note])
            note = ''
    if note:
        parsed_beats.append(beats_per_note[note])
    return parsed_beats