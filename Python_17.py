def parse_music(music_strings, notes={}):
    def get_notes(music_strings, notes):
        music_notes = music_strings.split("|")
        return [notes.get(note.strip(), None) for note in music_notes]

    return get_notes(music_strings, notes)