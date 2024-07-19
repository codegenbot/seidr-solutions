```
def parse_music(music_string: str) -> List[int]:
    result = []
    notes = {'o': 4, 'o|': 2, '.|': 1}
    temp = ''
    for char in music_string:
        if char in ['o', 'o|']:
            temp += char
        elif char == '.' and temp == '|':
            temp = ''
        else:
            result.append(notes[temp])
            temp = ''
    result.append(notes[temp])
    return result