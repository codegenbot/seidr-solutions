def get_notes(music_strings, notes):
    return [notes[note] for music_string in music_strings for note in music_string.split()]