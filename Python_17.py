def parse_music(music_input: str) -> str:
    notes = music_input.split()
    count = len(notes)
    longest_note_len = max([len(note) for note in notes])
    return f"{count} {longest_note_len}"