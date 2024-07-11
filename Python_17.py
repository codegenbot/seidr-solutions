```
def parse_music(music_string: str) -> List[int]:
    beats = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if i + 3 <= len(music_string) and music_string[i:i+3] == '.|':
                result.append(1)
                i += 3
            else:
                raise ValueError("Invalid input")
        elif music_string[i] == 'o' or music_string[i] == 'o|':
            if music_string[i:i+2] in beats:
                result.append(beats[music_string[i:i+2]])
                i += 2
            else:
                raise ValueError("Invalid input")
        i += 1
    return result