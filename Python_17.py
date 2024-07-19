```
def parse_music(music_string: str) -> List[int]:
    note_dict = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.' and i + 3 <= len(music_string) and music_string[i+1] == '|':
            i += 4
        elif music_string[i:i+2] in note_dict:
            result.append(note_dict[music_string[i:i+2]])
            i += 2
        else:
            raise ValueError("Invalid input")
    return result