```python
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            beats.extend([notes['.'], notes['|']] * (int(music_string[i+1]) - 1))
            i += 2
        else:
            note_type = music_string[i:i+2]
            beats.append(notes[note_type])
            i += 2
    return beats