def parse_music(music_string: str) -> List[int]:
    beats = []
    note_map = {"o": 4, "o|": 2, ".|": 1}

    for note in music_string.split():
        if note in note_map:
            beats.append(note_map[note])
        else:
            raise ValueError(f"Invalid note '{note}'")

    return beats