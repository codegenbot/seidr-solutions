def process_music(music_string):
    music_list = []
    i = 0
    while i < len(music_string):
        if i < len(music_string) - 1 and music_string[i:i+2] == 'o-':
            music_list.append(0.5)
            i += 2
        else:
            i += 1
    return music_list