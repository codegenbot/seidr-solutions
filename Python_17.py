def parse_music(music_string):
    notes_count = [measure.count("o") for measure in music_string.split("|")]
    return notes_count