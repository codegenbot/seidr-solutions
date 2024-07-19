```
def parse_music(music_string: str) -> List[int]:
    note_durations = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            i += 2
        else:
            i += 1
        note_type = ''
        while i < len(music_string) and music_string[i] not in ['o', 'o|', '.']:
            note_type += music_string[i]
            i += 1
        result.append(note_durations[note_type])
    return result