```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    current_note = ''
    for char in music_string:
        if char in ['o', 'o|', '.|']:
            if current_note:
                result.append(beats_per_note[current_note])
            current_note = char
        elif char == '|':
            result.append(beats_per_note[current_note])
            current_note = ''
    if current_note:
        result.append(beats_per_note[current_note])
    return result