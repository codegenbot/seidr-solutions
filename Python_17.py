```
def parse_music(music_string: str) -> List[int]:
    beats = [4, 2, 1]
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+3] == 'o..':
            result.append(beats[0])
            i += 3
        elif music_string[i:i+2] == '.|':
            result.append(beats[1])
            i += 2
        elif music_string[i:i+4] == '..|. ':
            result.append(beats[2])
            i += 4
    return result