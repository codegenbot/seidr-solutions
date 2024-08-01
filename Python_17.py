Here is the modified code:

```
def parse_music(music_string: str) -> list:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            i += 1
            continue
        note = ''
        while i < len(music_string) and (music_string[i] in '|.'):
            note += music_string[i]
            i += 1
        result.append(notes.get(note, 0))
    return result