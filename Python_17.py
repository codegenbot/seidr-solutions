def parse_music(music_string: str) -> List[int]:
    beat_map = {"o": 4, "|": 2, ".": 1}
    beats = []
    for note in music_string.split():
        beats.append(beat_map[note[0]])
        if len(note) > 1:
            beats.extend([beat_map[note[1]]] * (len(note) - 1))
    return beats