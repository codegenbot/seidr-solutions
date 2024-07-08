note_map = {'A': 0, 'B': 1, 'C': 2, 'D': 3, 'E': 4, 'F': 5, 'G': 6}

def check(note: str) -> int:
    return note_map.get(note.upper(), -1)

def parse_music(music_string: str) -> list:
    result = []
    notes = music_string.split(',')
    for note in notes:
        result.append(check(note))
    return result