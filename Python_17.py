```
def parse_music(music_string: str) -> List[int]:
    note_lengths = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            j = i + 1
            while j < len(music_string) and music_string[j] != '|':
                j += 1
            result.append(note_lengths['.|'])
            i = j
        elif music_string[i] == 'o':
            j = i + 1
            while j < len(music_string) and (music_string[j] == 'o' or music_string[j] == '|'):
                j += 1
            if music_string[j] == '|':
                result.append(note_lengths['o|'])
                i = j
            else:
                result.append(note_lengths['o'])
                i = j
        elif music_string[i] == 'o|':
            result.append(note_lengths['o|'])
            i += len('o|')
    return result