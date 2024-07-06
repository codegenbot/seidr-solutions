```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    temp = ''
    for char in music_string:
        if char in notes:
            if temp:
                beats.append(notes[temp])
                temp = ''
            temp += char
    beats.append(notes[temp])
    return beats