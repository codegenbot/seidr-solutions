```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if i + 3 <= len(music_string) and music_string[i:i+3] in notes:
                beats.append(notes[music_string[i:i+3]])
                i += 3
            else:
                beats.append(notes.get('.|', 1))
                i += 1
        elif music_string[i] == 'o':
            if i + 2 <= len(music_string) and music_string[i:i+3] in notes:
                beats.append(notes[music_string[i:i+3]])
                i += 3
            else:
                beats.append(notes.get('o', 4))
                i += 1
        elif music_string[i] == '|':
            if i + 1 < len(music_string):
                beats.append(notes['o|'])
                i += 2
    return beats