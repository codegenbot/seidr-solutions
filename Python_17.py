```
def parse_music(music_string: str) -> list:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    music_list = [beats_per_note.get(note, 4) for note in music_string.replace(' |', '|').split()]
    return music_list