def parse_music(music_string: str) -> List[int]:
    beats_per_note = {"o": 4, "o|": 2, ".|": 1}
    music_notes = music_string.split()
    parsed_beats = []
    for note in music_notes:
        if note in beats_per_note:
            parsed_beats.append(beats_per_note[note])
        else:
            raise ValueError("Invalid note")
    return parsed_beats