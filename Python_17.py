def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "|": 2, ".|": 1}
    beat_list = []
    for note in music_string.split():
        if note in notes:
            beat_list.append(notes[note])
    return beat_list