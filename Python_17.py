```
def parse_music(music_string: str) -> List[int]:
    notes = {
        'o': 4,
        'o|': 2,
        '.|': 1
    }
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            j = i + 1
            while j < len(music_string) and music_string[j] != '|':
                j += 1
            result.append(notes['o|'] * (j - i))
            i = j
        elif music_string[i] in notes:
            result.append(notes[music_string[i]])
            i += 1
    return result