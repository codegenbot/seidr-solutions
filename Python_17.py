```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    notes = music_string.split()
    result = []
    for note in notes:
        if note in beats_per_note:
            result.append(beats_per_note[note])
        else:
            raise ValueError(f"Invalid note: {note}")
    return result