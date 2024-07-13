```
def parse_music(music_string: str) -> List[int]:
    beats = [0, 4, 2, 1]
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note_length = 1
        elif music_string[i] == 'o':
            note_length = 4
        else:
            note_length = 2
        i += 1
        if i < len(music_string) and music_string[i] == '|':
            note_length = beats[3]
            i += 1
        result.append(note_length)
    return result