```python
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+3] in ['ooo', '|oo']:
            result.append(notes['o'])
            i += 3
        elif music_string[i:i+4] == 'oooo':
            result.extend([notes['o']] * 4)
            i += 4
        elif music_string[i:i+2] in notes:
            note = music_string[i:i+2]
            if note in ['o|', '.|']:
                i += 3
            else:
                i += 2
            result.append(notes[note])
    return result