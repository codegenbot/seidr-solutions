def parse_music(music_string: str) -> list:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            music_list.append(4)
            if music_string[i] != '.':
                i += 1
        elif i < len(music_string) - 2 and music_string[i:i+2] == 'o|':
            music_list.append(2)
            if music_string[i] != '|':
                i += 1
        elif i < len(music_string) - 3 and music_string[i:i+3] == '.||':
            music_list.append(1)
            if music_string[i] != '|':
                i += 1
        else:
            if music_string[i] != '.':
                i += 1
    return music_list