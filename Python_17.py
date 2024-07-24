```
def parse_music(music_string: str) -> List[int]:
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            if music_string[i-1].isdigit():
                result.append(int(music_string[i-1])*2)
            else:
                result.append(2)
            i += 2
        elif music_string[i] == 'o':
            result.append(4)
            i += 1
        elif music_string[i:i+3] == '.|..|.' or music_string[i:i+2] == '..|' or music_string[i:i+2] == '|..|' or music_string[i:i+2] == '..|.':
            if len(result) > 0 and result[-1] >= 1:
                result[-1] += 1
            else:
                result.append(1)
            i += 3
    return result