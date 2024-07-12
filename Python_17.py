```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note_type = ''
            for j in range(i + 1):
                note_type += music_string[j]
            result.append(notes[note_type])
            i += len(note_type)
        else:
            result.append(notes[music_string[i]])
            i += 1
    return result