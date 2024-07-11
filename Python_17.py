```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.' and i + 3 <= len(music_string) and music_string[i+1] == '|':
            i += 4
            continue
        note = ''
        while i < len(music_string) and (music_string[i] in 'o|.' or music_string[i] == '|'):
            note += music_string[i]
            i += 1
        result.append(notes[note])
    return result