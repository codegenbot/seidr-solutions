```"""
def parse_music(music_string: str) -> list:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '|':
            i += 1
        if music_string[i:i+2] in notes:
            note_length = notes[music_string[i:i+2]]
            result.append(note_length)
            i += 2
        else:
            i += 1
    return result
""``