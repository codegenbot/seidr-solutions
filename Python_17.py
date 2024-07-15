def parse_music(music_string: str) -> list:
    if not music_string:
        return []
    music_string = ''.join(e for e in music_string if e in 'o\.|\\.\.\|')
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            if i+1 < len(music_string) and music_string[i+1] in ['|', '.']:
                if music_string[i:i+3] == 'o.|':
                    music_list.extend([8, 4, 2])
                    i += 3
                elif music_string[i:i+3] == 'o. |':
                    music_list.append(6)
                    i += 3
                else:
                    music_list.append(2)
                    i += 1
            else:
                music_list.append(4)
                i += 1
        elif music_string[i:i+3] == '.|..|':
            music_list.extend([8, 4, 2])
            i += 3
        i += 1
    return music_list