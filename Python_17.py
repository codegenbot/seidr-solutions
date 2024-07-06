def parse_music(music_string: str) -> List[int]:
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'oO':
            beats.append(4)
            i += 2
        elif music_string[i:i+3] == '.|.':
            beats.append(1)
            i += 3
        elif music_string[i:i+5] == 'o.|o':
            beats.append(3)
            i += 4
    return beats