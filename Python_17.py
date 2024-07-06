```
def parse_music(music_string: str) -> list:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            if i+1 < len(music_string) and music_string[i+1] == '|':
                music_list.append(2)
                i += 2
            elif i+3 <= len(music_string) and music_string[i:i+3] in ['ooo', '.|o']:
                if music_string[i:i+3] == 'ooo':
                    music_list.append(4)
                else:
                    music_list.append(1)
                i += 3
            else:
                return []
        elif i+2 <= len(music_string) and music_string[i:i+3] in ['..|', '.|.']:
            if music_string[i:i+3] == '..|':
                music_list.append(0)
            else:
                music_list.append(1)
            i += 3
        else:
            return []
    return music_list