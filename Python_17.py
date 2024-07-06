```
def parse_music(music_string: str) -> list:
    music_list = []
    i = 0
    while i < len(music_string):
        if i+2 <= len(music_string) and music_string[i:i+3] == '.|':
            music_list.append(1)
            i += 3
        elif music_string[i] == 'o':
            if i+1 < len(music_string) and music_string[i+1] == '|':
                music_list.append(2)
                i += 2
            elif i+3 <= len(music_string) and music_string[i:i+3] == '.|o':
                music_list.append(3)
                i += 3
            else:
                music_list.append(4)
                i += 1
        elif music_string[i] == '|':
            if i+1 < len(music_string) and music_string[i+1] == '.':
                music_list.append(1)
                i += 2
            else:
                music_list.append(4)
                i += 1
        elif music_string[i] == '.':
            if i+1 < len(music_string) and music_string[i+1] == '|':
                music_list.append(1)
                i += 2
            elif i+1 < len(music_string) and music_string[i+1] == '.':
                music_list.append(4)
                i += 2
            else:
                music_list.append(4)
                i += 1
    return music_list