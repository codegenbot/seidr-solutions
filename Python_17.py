```
def parse_music(music_string: str) -> List[int]:
    note_lengths = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    current_note = ''
    for char in music_string:
        if char in note_lengths:
            if current_note:
                result.append(note_lengths[current_note])
            current_note = char
        elif char == ' ':
            continue
        else:  # '|'
            result.append(note_lengths[current_note])
            current_note = ''
    result.append(note_lengths[current_note])
    return result