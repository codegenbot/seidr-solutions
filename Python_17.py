```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    music_notes = music_string.split()
    result = []
    for note in music_notes:
        if note not in beats_per_note:
            raise ValueError(f"Unknown note: {note}")
        result.append(beats_per_note[note])
    return result