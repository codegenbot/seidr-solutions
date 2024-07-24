def parse_music(music_string: str) -> List[int]:
    result = []
    for note in music_string.split():
        if note == 'o':
            result.append(4)
        elif note == '|':
            if '.' in note:
                result.append(1)
            else:
                result.append(2)
    return result