```
def parse_music(music_string: str) -> list:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            i += 1
            continue
        note = ''
        while i < len(music_string) and (music_string[i] in '|.'):
            note += music_string[i]
            i += 1
        if note not in notes:
            result.append(0)
        else:
            result.append(notes[note])
    return result