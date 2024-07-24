def parse_music(music_string: str) -> List[int]:
    beats = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if i+3 <= len(music_string)-1 and music_string[i:i+3] in beats:
                i += 3
            else:
                return []  # invalid input
        elif i+1 <= len(music_string)-1 and music_string[i:i+2] in beats:
            result.append(beats[music_string[i:i+2]])
            i += 2
        else:
            return []  # invalid input
    return result