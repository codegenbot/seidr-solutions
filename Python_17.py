def parse_music(music_string: str) -> list:
    if not music_string:
        return []
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o.':
            music_list.append(2)
            i += 2
        elif music_string[i:i+2] == 'o|':
            if i+1 < len(music_string) and music_string[i+1] in ['.', '|']:
                music_list.append(4)
                i += 1
            else:
                music_list.append(4)
                i += 1
        elif music_string[i:i+5] == 'o.|':
            music_list.extend([8, 4, 2])
            i += 3
        elif music_string[i:i+9] == '.|..|.||':
            music_list.extend([8, 4, 2])
            i += 5
    return music_list