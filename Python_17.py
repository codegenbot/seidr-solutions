```
def parse_music(music_string: str) -> List[int]:
    music_notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+3] in music_notes:
            result.append(music_notes[music_string[i:i+3]])
            i += 3
        else:
            if music_string[i] == 'o':
                result.append(4)
                i += 1
            elif music_string[i] == 'o|':
                result.append(2)
                i += 2
            elif music_string[i] == '.':
                result.append(1)
                i += 1
    return result