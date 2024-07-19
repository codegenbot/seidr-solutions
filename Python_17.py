def parse_music(music_string: str) -> List[int]:
    music_notes = {"o": 4, "o|": 2, ".|": 1}
    result = []

    for note in music_string.split():
        if note[-1] == "|":
            note = note[:-1]
        result.append(music_notes[note])

    return result