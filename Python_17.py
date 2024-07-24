def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    result = []
    notes = music_string.split()
    for note in notes:
        result.append(notes_duration[note])
    return result