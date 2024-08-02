```
def parse_music(music_string: str) -> List[int]:
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            beats.append(4)
            i += 1
        elif music_string[i:i+3] == '.|o':
            beats.append(8)
            i += 3
        elif music_string[i:i+4] == '..|o':
            beats.append(12)
            i += 4
    return beats