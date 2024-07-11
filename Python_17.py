```
def parse_music(music_string: str) -> List[int]:
    notes = {
        'o': [4],
        'o|': [2],
        '.|': [1]
    }
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            for _ in range(3):
                i += 1
        else:
            note_type = music_string[i:i+2]
            i += 2
            result.extend(notes.get(note_type, [notes[k] for k in notes if len(k) == len(note_type)]))
    return result