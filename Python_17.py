def parse_music(music_string: str) -> list:
    music_string = music_string.replace(" ", "")
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            music_list.append(4)
            i += (music_string[i] != '.')
        elif i < len(music_string) - 2 and music_string[i:i+2] == 'o|':
            music_list.append(2)
            i += (music_string[i] != '|')
        elif i < len(music_string) - 3 and music_string[i:i+3] == '.||':
            music_list.append(1)
            i += (music_string[i] != '|')
        else:
            i += (music_string[i] != '.')  
    return music_list