```
def parse_music(music_string: str) -> List[int]:
    result = []
    for note in music_string.split():
        if note == 'o':
            result.append(4)
        elif note == 'o|':
            result.append(2)
        elif note == '.|':
            result.append(1)
        else:
            beat_length = 0
            if note[0] == 'o':
                beat_length = 4
            elif note[0] == 'o' and note[1] == '|':
                beat_length = 2
            elif note[0] == '.' and note[1] == '|':
                beat_length = 1
            result.append(beat_length)
    return result