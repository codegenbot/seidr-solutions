```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if i + 3 <= len(music_string) and music_string[i:i+3] in notes:
                i += 2
            else:
                break
        elif i + 1 <= len(music_string) and music_string[i:i+2] in notes:
            i += 1
        result.append(notes[music_string[i:i+2]])
    return result