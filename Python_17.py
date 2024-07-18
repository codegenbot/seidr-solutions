def parse_music(music_string):
    music_list = music_string.split("|")
    notes_count = [len(note.strip().split()) for note in music_list]
    return notes_count