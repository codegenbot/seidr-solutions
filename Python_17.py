
def parse_music(music_string):
    note_dict = {'o': 4, '|': 2, '.|': 1}
    return [note_dict[note] for note in music_string]