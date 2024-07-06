```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if i + 2 <= len(music_string) and music_string[i:i+3] in notes:
                result.append(notes['.|'])
                i += 2
            else:
                raise ValueError("Invalid input")
        elif music_string[i] == 'o':
            if i + 1 <= len(music_string) and music_string[i:i+2] in notes:
                result.append(notes.get('o', 4))
                i += 1
            else:
                raise ValueError("Invalid input")
        elif music_string[i] == '|':
            if i + 1 <= len(music_string) and music_string[i-1:i+1] in notes:
                result.append(notes['o|'])
                i += 1
            else:
                raise ValueError("Invalid input")
        i += 1
    return result