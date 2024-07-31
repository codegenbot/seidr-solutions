```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        note = music_string[i:i+2]
        if note not in beats_per_note:
            raise ValueError(f"Invalid note: {note}")
        result.append(beats_per_note[note])
        i += 2
    return result