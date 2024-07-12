```
def parse_music(music_string: str) -> List[int]:
    music_list = []
    for char in music_string:
        if char == 'o':
            music_list.append(4)
        elif char == '|':
            music_list[-1] += 2
        elif char == '.':
            music_list[-1] += 1
    return music_list