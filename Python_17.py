def parse_music(music_input):
    music_list = music_input.split()
    music_dict = {}
    for music in music_list:
        name, notes = music.split(":")
        music_dict[name] = notes

    return music_dict