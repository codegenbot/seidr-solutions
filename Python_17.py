```
def parse_music(music_string: str) -> list:
    beats = [4, 2, 1]
    result = []

    for note in music_string.split():
        if note == 'o':
            result.extend([beats[0]]*4)
        elif note == 'o|':
            result.append(beats[1])
        elif note == '.|':
            result.append(beats[2])

    return result