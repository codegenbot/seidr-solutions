```
def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            if music_string[i-1].isdigit():
                duration = int(music_string[i-1])
                music_list.append(duration * 4)
            else:
                music_list.append(4)
            i += 2
        elif music_string[i] == '.':
            music_list.append(1)
            i += 1
    return music_list