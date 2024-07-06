```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if i+3 < len(music_string) and music_string[i:i+3] == '..|':
                result.append(notes['o'])
            elif i+2 < len(music_string) and music_string[i:i+2] in notes:
                result.append(notes[music_string[i:i+2]])
            else:
                return []
        else:
            note_type = music_string[i:i+2]
            if note_type in notes:
                result.append(notes[note_type])
            else:
                return []
        i += 2
    return result