def parse_music(music_string: str) -> list:
    music_list = []
    for note in music_string.split():
        if note == 'o':
            music_list.append(4)
        elif note == 'o|':
            music_list.append(2)
        elif note == '.|':
            music_list.append(1)
    return music_list