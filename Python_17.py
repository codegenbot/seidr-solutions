```
def parse_music(music_string: str) -> list:
    beats = [4, 2, 1]
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            result.extend([beats[0]]*3)
            i += 3
        elif music_string[i:i+2] == 'o|':
            result.append(beats[1])
            i += 2
        elif music_string[i:i+3] == '.| ':
            result.append(beats[2])
            i += 3
    return result