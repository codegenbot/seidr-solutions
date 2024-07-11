```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if i+3 <= len(music_string) and music_string[i:i+3] == '..|':
                result.append(beats_per_note['.|'])
                i += 3
            else:
                result.append(1)
                i += 4
        else:
            note = music_string[i:i+2]
            if i+2 <= len(music_string) and music_string[i:i+2] in beats_per_note:
                result.append(beats_per_note[note])
                i += 2
            else:
                result.append(0)
                i += 2
    return result