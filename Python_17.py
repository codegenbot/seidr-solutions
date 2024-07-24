```python
def parse_music(music_string: str) -> list:
    notes = {'o': [4], 'o|': [2, 1], '.|': [1]}
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '|':
            beat = []
            i += 1
            while i < len(music_string) and music_string[i] != '|':
                if music_string[i] in 'o.':
                    beat.append(notes.get('o' + music_string[i], [4]))
                    i += 1
                else:
                    return []
        elif music_string[i:i+2] in notes:
            beats.extend(notes[music_string[i:i+2]])
            i += 2
        else:
            return []
    return beats