```
def parse_music(music_string: str) -> List[int]:
    music_list = []
    for note in music_string:
        if note == 'o':
            music_list.append(4)
        elif note == '|':
            music_list[-1] -= 1
    return music_list