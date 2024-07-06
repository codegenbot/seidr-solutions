```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note_type = music_string[i+1:i+3]
            if note_type in notes:
                result.append(notes[note_type])
            else:
                result.append(0)
            i += 3
        elif music_string[i:i+2] in notes:
            result.append(notes[music_string[i:i+2]])
            i += 2
        else:
            i += 1
    return result