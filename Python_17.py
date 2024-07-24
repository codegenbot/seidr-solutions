```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note_type = ''
            j = i
            while j < len(music_string) and (music_string[j] in ['.', '|']):
                note_type += music_string[j]
                j += 1
            result.append(beats_per_note[note_type])
            i = j
        else:
            if music_string[i] == 'o':
                result.append(4)
            elif music_string[i] == 'o|':
                result.append(2)
            i += 1
    return result