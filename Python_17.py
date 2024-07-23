```
def parse_music(music_string: str) -> list:
    note_lengths = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+3] == '..|':
            i += 3
        else:
            i += 2
        note_type = music_string[i-1:i]
        result.append(note_lengths.get(note_type, 4))
    return result