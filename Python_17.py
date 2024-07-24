```
def parse_music(music_string: str) -> List[int]:
    beats = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    temp = ''
    for char in music_string:
        if char in beats or char == '|':
            temp += char
            if temp in beats:
                result.append(beats[temp])
                temp = ''
        elif char == ' ' and temp:
            result.append(beats[temp])
            temp = ''
    return result