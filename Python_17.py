```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if music_string[i+1] == '|':
                result.append(notes['.||'])
            else:
                result.append(0)
            i += 3
        elif music_string[i:i+2] in notes:
            result.append(notes[music_string[i:i+2]])
            i += 2
    return result