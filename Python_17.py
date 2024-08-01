```
def parse_music(music_string: str) -> List[int]:
    music_list = []
    note_values = {'o':4, 'o|':2, '.|':1}
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] in note_values:
            music_list.append(note_values[music_string[i:i+2]])
            i += 2
        elif music_string[i] == 'o':
            music_list.append(4)
            i += 1
        else:
            i += 1
    return music_list