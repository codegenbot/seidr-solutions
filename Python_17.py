```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note = ''
            for j in range(i+1, min(i+3, len(music_string))):
                note += music_string[j]
            beats.append(notes.get(note, 0))
            i += 2
        else:
            beats.append(notes[music_string[i:i+2]])
            i += 2
    return beats