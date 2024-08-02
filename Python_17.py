```python
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    note = ''
    for char in music_string:
        if char in ['o', 'o|']:
            note += char
        elif char == '|':
            if note:
                beats.append(notes.get(note, 0))
                note = ''
            else:
                beats.append(4)
        elif char == '.':
            beats.append(notes['.|'])
    if note:
        beats.append(notes.get(note, 0))
    return beats