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
                for j in range(i, len(music_string)):
                    if music_string[j] == '|':
                        music_list.append(4)
                        i = j + 1
                        break
        elif i+2 < len(music_string) and music_string[i:i+3] == '.|o':
            music_list.append(1)
            i += 3
    return music_list