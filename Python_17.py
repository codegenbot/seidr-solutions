```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+3] in notes:
            beats.append(notes[music_string[i:i+3]])
            i += 3
        elif music_string[i] == '.':
            beats.append(1)
            i += 1
        elif music_string[i] == 'o':
            beats.append(4)
            i += 1
        elif music_string[i] == '|':
            beats.append(2)
            i += 1
    return beats