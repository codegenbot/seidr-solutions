```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            i += 3
            continue
        note_type = music_string[i:i+2]
        if note_type in notes:
            result.append(notes[note_type])
        else:
            raise ValueError("Invalid input")
        i += 2
    return result