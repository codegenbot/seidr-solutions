```"""
def parse_music(music_string: str) -> list:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '|':
            i += 1
        note_length = notes.get(music_string[i:i+2], 4)
        result.append(note_length)
        i += 2
    return result
""``