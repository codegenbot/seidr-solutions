def get_notes(music_string):
    notes = {"do": 4, "re": 2, "mi": 1, "sol": 5}
    return [notes[note] for note in music_string.split() if note in notes]