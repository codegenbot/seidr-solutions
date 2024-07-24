```python
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'O': 4, "'o': 4, "'O': 4, "o": 4, "O": 4, ".": 1, "|": 2}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] in notes:
            result.append(notes[music_string[i:i+2]])
        else:
            if music_string[i] == '|':
                result.append(2)
            elif music_string[i] == '.':
                result.append(1)
            i += 1
    return result