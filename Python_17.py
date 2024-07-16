```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note = ''
            for j in range(i + 1):
                note += music_string[j]
            result.append(notes[note])
            i += len(note)
        else:
            result.append(notes[music_string[i]])
            i += 1
    return result