def parse_music(music_input: str) -> str:
    notes = music_input.split()
    unique_notes = set(notes)
    result = ''.join(sorted(unique_notes))
    return result