```python
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    note = ''
    for char in music_string:
        if char in ['o', 'o|']:
            note = char
        elif char == '|':
            if note:
                beats.append(notes[note])
                note = ''
            else:
                beats.append(4)
        elif char == '.':
            beats.append(1)
    return beats