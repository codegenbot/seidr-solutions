```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if i+3 <= len(music_string) - 1:
                result.append(notes[music_string[i:i+3]])
                i += 3
            else:
                break
        else:
            note_type = music_string[i:i+2]
            if i+2 <= len(music_string) - 1:
                result.append(notes[note_type])
                i += 2
            else:
                break
    return result