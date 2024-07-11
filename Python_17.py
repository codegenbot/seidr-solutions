```python
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note_type = '|'
        else:
            note_type = music_string[i:i+3]
        result.append(notes.get(note_type, 4))
        i += 3
    return result