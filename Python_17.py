def parse_music(music_string: str) -> List[int]:
    music_notes = music_string.split()
    note_duration = []
    
    for note in music_notes:
        if note == 'o':
            note_duration.append(4)
        elif note == 'o|':
            note_duration.append(2)
        elif note == '.|':
            note_duration.append(1)
    
    return note_duration