```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if i+3 <= len(music_string) and music_string[i:i+3] == '..|':
                result.append(4)
                i += 3
            else:
                i += 1
        elif music_string[i] == 'o' or music_string[i] == 'o|':
            note = music_string[i:i+2]
            i += 2
            if note in beats_per_note:
                result.append(beats_per_note[note])
        else:
            i += 1
    return result