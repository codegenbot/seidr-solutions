```
def parse_music(music_string: str) -> list:
    beats = [4, 2, 1]
    result = []
    
    for note in music_string.split():
        if note == 'o':
            result.append(4)
        elif note == 'o|':
            result.extend([4, 2])
        elif note == '.|':
            result.extend([4, 2, 1])
    
    return result