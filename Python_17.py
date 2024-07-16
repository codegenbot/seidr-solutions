```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '|':
            i += 1
        j = i + 1
        while j < len(music_string) and music_string[j] != '|':
            j += 1
        note = music_string[i:j]
        result.append(notes[note])
        i = j
    return result