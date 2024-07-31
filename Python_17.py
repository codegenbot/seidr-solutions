```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            i += 3
        else:
            i += 2
        beat = notes[music_string[i-2:i]]
        beats.append(beat)
    return beats