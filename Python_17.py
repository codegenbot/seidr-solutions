def parse_music(music_strings, notes={'.': 1, 'o': 2, ' ': 4}):
    def get_notes(music_strings, notes):
        music_notes = music_strings.split("|")
        return [notes[note.strip()] for note in music_notes if note.strip() in notes]

    return get_notes(music_strings, notes)