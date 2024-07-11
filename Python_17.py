```
def parse_music(music_string: str) -> list[int]:
    beats = [4, 2, 1]
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+3] == 'o..':
            result.append(4)
            i += 3
        elif music_string[i:i+3] == '.| ':
            result.append(2)
            i += 3
        elif music_string[i:i+5] == '... |':
            result.append(1)
            i += 4
    return result