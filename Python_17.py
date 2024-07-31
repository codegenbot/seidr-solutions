```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    temp_beats = 0
    for note in music_string:
        if note not in beats_per_note:
            return []  # invalid input
        temp_beats += beats_per_note[note]
        result.append(temp_beats)
    return result