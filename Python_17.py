def parse_music(music_string: str) -> list:
    music_list = []
    i = 0
    while i < len(music_string):
        if i+2 <= len(music_string) and music_string[i:i+2].lower() == 'o|':
            music_list.append(4)
            i += 2
        elif i+6 <= len(music_string) and music_string[i:i+6].lower() == '.|..|.||.|..|':
            music_list.append(1)
            i += 6
        elif i+8 <= len(music_string) and music_string[i:i+8].lower() == '..|.|..|...|..|.|..|':
            music_list.append(0.5)
            i += 8
    return music_list