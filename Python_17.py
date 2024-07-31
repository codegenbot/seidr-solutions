```
def parse_music(music_string: str) -> List[int]:
    beats = []
    note_duration = {'o': 4, 'o|': 2, '.|': 1}
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            duration = 1
        elif music_string[i:i+2] in ['o ', 'o||']:
            duration = 4
        else:
            duration = 2
        beats.append(duration)
        i += 1 + (music_string[i-1:i+1] in ['o|', '.|'])
    return beats