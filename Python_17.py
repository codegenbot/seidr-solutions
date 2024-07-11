def parse_music(music_string: str) -> List[int]:
    music_notes = {"o": 4, "o|": 2, ".|": 1}
    result = []
    current_note = ""
    for char in music_string:
        if char.isalpha():
            current_note += char
        else:
            if current_note:
                if current_note in music_notes:
                    result.append(music_notes[current_note])
                else:
                    return []
                current_note = ""
    if current_note:
        if current_note in music_notes:
            result.append(music_notes[current_note])
        else:
            return []
    return result