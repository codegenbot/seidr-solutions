```python
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'O': 4, '|': 0, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '|':
            i += 1
            note_type = music_string[i:i+2]
            i += 2
        else:
            note_type = ''
        if i >= len(music_string) - 1 or music_string[i] in {'|', '\'', "'"}:
            note_length = notes.get(note_type, 4)
            result.append(note_length)
            break
        while i < len(music_string) and (music_string[i] not in {'|', '\'', "'"}):
            if note_type == '':
                note_type = music_string[i:i+2]
                i += 2
            else:
                i += 1
        result.append(notes.get(note_type, 4))
    return result