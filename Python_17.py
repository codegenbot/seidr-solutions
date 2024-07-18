def parse_music(music_string):
    music_list = music_string.split("|")
    notes_count = [measure.count("o") for measure in music_list if measure.strip()]
    return notes_count