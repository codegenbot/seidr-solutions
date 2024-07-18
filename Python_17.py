def parse_music(music_input):
    music_list = music_input.split('|')
    music_dict = {}
    for idx, music in enumerate(music_list, 1):
        music_dict[idx] = len(music.split())
    
    return list(music_dict.values())