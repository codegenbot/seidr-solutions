```
def parse_music(music_string: str) -> List[int]:
    music_notes = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            music_notes.append(4)
            i += 3
        elif music_string[i] == 'o|':
            music_notes.append(2)
            i += 4
        elif music_string[i] == '.':
            music_notes.append(1)
            i += 2
    return music_notes