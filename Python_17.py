```
def parse_music(music_string: str) -> List[int]:
    note_durations = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    current_note = ''
    for char in music_string:
        if char in note_durations:
            if current_note:
                result.append(note_durations[current_note])
            current_note = char
        elif char == ' ' and current_note:
            result.append(note_durations[current_note])
            current_note = ''
    if current_note:
        result.append(note_durations[current_note])
    return result