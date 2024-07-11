```
def parse_music(music_string: str) -> List[int]:
    music = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            music.append(4)
            i += 5
        elif music_string[i:i+3] == 'o|':
            music.append(2)
            i += 3
        elif music_string[i:i+3] == '.|':
            music.append(1)
            i += 3
    return music