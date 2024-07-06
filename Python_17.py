```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if i+3 < len(music_string) and music_string[i+1] == '|' and music_string[i+2] == '|':
                i += 3
            else:
                result.append(0)
                i += 1
        elif music_string[i:i+2] in notes:
            result.append(notes[music_string[i:i+2]])
            i += 2
    return result