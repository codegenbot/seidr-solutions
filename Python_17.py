```
def parse_music(music_string: str) -> List[int]:
    beats = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note_duration = beats['o|']
        else:
            note_duration = beats[music_string[i:i+2]]
        result.append(note_duration)
        i += 2
    return result