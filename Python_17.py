```
def parse_music(music_string: str) -> List[int]:
    note_dict = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            i += 3
        else:
            beats.append(note_dict[music_string[i:i+2]])
            i += 2
    return beats