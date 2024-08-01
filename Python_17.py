```
def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            if i+1 < len(music_string) and music_string[i+1] == '|':
                music_list.append(2)
                i += 2
            else:
                music_list.extend([4, 8, 16, 32][min(int(music_string[i+j]) for j in range(4) if i+j < len(music_string))])
                i += min(int(music_string[i+j]) for j in range(4) if i+j < len(music_string))
        elif music_string[i:i+2] == 'o|':
            music_list.append(2)
            i += 2
    return music_list