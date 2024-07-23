```
def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    while i < len(music_string):
        if i+2 <= len(music_string) and music_string[i:i+2] == 'o|':
            music_list.append(4)
            i += 2
        elif i+3 <= len(music_string) and music_string[i:i+3] == '.|..|':
            music_list.append(1)
            i += 3
        elif i+4 <= len(music_string) and music_string[i:i+4] == '..|.|':
            music_list.append(0.5)
            i += 4
    return music_list