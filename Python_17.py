def parse_music(music_notes: str, notes_dict: dict) -> list:
    music_notes_list = music_notes.split('|')
    output_list = [notes_dict.get(note.strip(), 0) for note in music_notes_list]
    return output_list