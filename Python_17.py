def parse_music(music_string: str) -> List[int]:
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            if len(result) > 0 and result[-1] == 4:
                result.append(1)
            else:
                result.extend([4,1])
            i += 2
        elif music_string[i:i+3] == '.|..|':
            result.extend([2]*3)
            i += 3
        elif music_string[i] == 'o':
            result.append(4)
            i += 1
    return result