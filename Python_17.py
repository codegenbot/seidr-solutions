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
                j = i + 1
                while j < len(music_string) and music_string[j] != '|':
                    j += 1
                music_list.append(j - i)
                i = j
        elif music_string[i:i+3] == 'ooo':
            music_list.append(4)
            i += 3
    return music_list