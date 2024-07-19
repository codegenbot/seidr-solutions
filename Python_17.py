```
def parse_music(music_string: str) -> List[int]:
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            beats.append(4)
            i += 2
        elif music_string[i:i+3] == '.|.|':
            beats.append(1)
            i += 3
        elif music_string[i] == 'o':
            if i < len(music_string) - 1 and music_string[i+1] == '|':
                beats.append(4)
                i += 2
            else:
                beats.append(4)
                i += 1
    return beats