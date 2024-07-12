```
def parse_music(music_string: str) -> List[int]:
    note_lengths = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '|':
            i += 1
        note_type = music_string[i:i+2]
        i += 2
        result.append(note_lengths[note_type])
    return result