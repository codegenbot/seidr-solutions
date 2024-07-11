```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '|':
            i += 1
        note = ''
        while i < len(music_string) and (music_string[i] not in ['o', 'o|', '.|']):
            note += music_string[i]
            i += 1
        if note in notes:
            result.append(notes[note])
    return result