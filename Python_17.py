```
def parse_music(music_string: str) -> List[int]:
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            beats.append(4)
            i += 2
        elif music_string[i:i+3] == '.|..|':
            beats.extend([1, 1, 1])
            i += 3
        elif music_string[i:i+2] == 'o|o':
            beats.extend([4, 4])
            i += 2
    return beats