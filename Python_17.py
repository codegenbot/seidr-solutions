'''

def parse_music(music_string: str) -> list:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.' and i + 3 <= len(music_string):
            if music_string[i:i+3] in notes:
                result.append(notes[' .|'])
                i += 3
            else:
                raise ValueError("Invalid note")
        elif music_string[i:i+2] in notes:
            result.append(notes[music_string[i:i+2]])
            i += 2
        else:
            raise ValueError("Invalid note")
    return result

'''