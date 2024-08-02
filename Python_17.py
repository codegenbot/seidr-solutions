```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            i += 3
        else:
            i += 2
        if i < len(music_string) and (music_string[i] in notes or music_string[i:i+2] in notes):
            beats.append(notes.get(music_string[i:i+2], notes[music_string[i]]))
    return beats