```
def parse_music(music_string: str) -> List[int]:
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            result.append(4)
            i += 1
        elif music_string[i:i+3] == '.|o':
            result.append(2)
            i += 3
        elif music_string[i:i+5] == '..|.o':
            result.append(1)
            i += 4
    return result