```
def parse_music(music_string: str) -> list:
    notes = []
    current_note = ''
    for char in music_string:
        if char.isdigit():
            current_note += char
        elif current_note:
            notes.append(int(current_note))
            current_note = ''
    if current_note:
        notes.append(int(current_note))
    return notes