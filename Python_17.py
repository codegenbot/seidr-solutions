def parse_music(music_notes, notes_dict):
    music_notes_list = music_notes.split('|')
    output_list = []
    for note in music_notes_list:
        if note.strip() in notes_dict:
            output_list.append(notes_dict[note.strip()])
    return output_list