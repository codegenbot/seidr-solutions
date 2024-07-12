def parse_music(music_string: str) -> list:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            if music_string[i+2:i+4] == ' ':
                music_list.append(1)
            else:
                music_list.append(2)
            i += 3
        elif music_string[i:i+5] == '..|.||.|':
            music_list.append(0.5)
            i += 5
        else:
            i += 1
    return music_list