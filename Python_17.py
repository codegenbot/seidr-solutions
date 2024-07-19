```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': [4], 'o|': [2], '.|': [1]}
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            beat_length = 1
            if i + 3 <= len(music_string) and music_string[i:i+3] in notes:
                if music_string[i:i+3] == '.|':
                    beat_length = 1
                else:
                    beat_length = 4
                i += 2
            beats.append(beat_length)
        elif music_string[i] == 'o':
            beat_length = 4
            if i + 2 <= len(music_string) and music_string[i:i+3] in notes:
                if music_string[i:i+3] == 'o|':
                    beat_length = 2
                else:
                    beat_length = 4
                i += 2
            beats.append(beat_length)
        elif music_string[i] == '|':
            beats.append(2)
            i += 1
    return beats