```
def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    while i < len(music_string):
        if i + 2 <= len(music_string) and music_string[i:i+3] == 'o..':
            music_list.append(4)
            i += 3
        elif i + 1 <= len(music_string) and music_string[i:i+2] == '.|':
            music_list.append(1)
            i += 2
        elif i + 1 <= len(music_string) and music_string[i:i+2] == 'o|':
            music_list.append(2)
            i += 2
    return music_list