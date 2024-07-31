```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    note_index = 0
    while note_index < len(music_string):
        if music_string[note_index] == '.':
            note_index += 1
            continue
        duration = notes[music_string[note_index:note_index + 2]]
        result.append(duration)
        note_index += 2
    return result