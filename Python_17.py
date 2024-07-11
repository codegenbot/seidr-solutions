```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note_length = 1
            i += 1
        elif music_string[i:i+2] in notes:
            note_length = notes[music_string[i:i+2]]
            i += 2
        else:
            raise ValueError("Invalid note format")
        result.append(note_length)
    return result