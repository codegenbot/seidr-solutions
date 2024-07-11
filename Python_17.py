```
def parse_music(music_string: str) -> list[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            i += 3
        else:
            note_type = music_string[i:i+3]
            result.append(notes[note_type])
            i += 3
    return result