def parse_music(music_string):
    music_list = music_string.split("|")
    notes_count = [measure.strip().count("o") for measure in music_list]
    return notes_count