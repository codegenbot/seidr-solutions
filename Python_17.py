```
def parse_music(music_string: str) -> list:
    notes = music_string.split()
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    for note in notes:
        result.append(beats_per_note[note])
    return result