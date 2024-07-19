```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if i + 2 <= len(music_string) and music_string[i:i+3] == '.|':
                result.append(beats_per_note['.|'])
                i += 2
            else:
                raise ValueError("Invalid input")
        elif music_string[i] == 'o':
            if i + 1 < len(music_string) and music_string[i:i+2] == 'o|':
                result.append(beats_per_note['o|'])
                i += 1
            else:
                result.append(beats_per_note['o'])
        elif music_string[i] == 'o|':
            result.append(beats_per_note['o|'])
        i += 1
    return result