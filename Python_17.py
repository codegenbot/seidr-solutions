def parse_music(music_input):
    music_list = music_input.split('|')
    return [len(part.split()) for part in music_list]