
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, '|': 2, '.': 1}
    return [notes[char] for char in music_string]