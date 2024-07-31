```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    note_index = 0
    while note_index < len(music_string):
        if music_string[note_index] == '.':
            note_index += 3
        else:
            note_type = music_string[note_index:note_index + 2]
            note_index += 2
            result.append(beats_per_note[note_type])
    return result