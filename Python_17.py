def parse_music(music_string: str) -> list:
    if not music_string:
        return []
    music_string = ''.join(e for e in music_string if e in 'o\.|\\.\.\|')
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            music_list.append(4)
            i += 1
        elif music_string[i:i+2] == 'o|':
            music_list.append(2)
            i += 2
        elif music_string[i:i+3] == '.|..|':
            music_list.append([8, 4, 2])
            i += 3
    return music_list