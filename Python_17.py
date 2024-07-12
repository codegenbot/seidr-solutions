```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    current_beats = 0
    for note in music_string.split():
        if note == 'o':
            current_beats += 4
        elif note == 'o|':
            current_beats += 2
        elif note == '.|':
            current_beats += 1
        else:
            raise ValueError(f"Invalid note: {note}")
    result.append(current_beats)
    return result