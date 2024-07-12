```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        note = music_string[i:i+3]
        if note in beats_per_note:
            result.append(beats_per_note[note])
        i += 3
    return result