```
def parse_music(music_string: str) -> list:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            music_list.append(4)
            i += 1
        elif i < len(music_string) - 1 and music_string[i:i+2] == 'o|':
            music_list.append(2)
            i += 2
        elif i < len(music_string) - 3:
            if music_string[i:i+3] in ['...||', '.||.', '..|.']:
                music_list.append(1)
                i += 3
            elif (music_string[i:i+2] in ['||', '|.'] and music_string[i+2] == '.') or (music_string[i:i+2] in ['..|', '.|.'] and music_string[i+2] == 'o'):
                if music_string[i:i+2] in ['||', '|.']:
                    music_list.append(0.5)
                    i += 2
                else:
                    music_list.append(1)
                    i += 2
            elif (music_string[i:i+2] in ['..|', '.|.'] and music_string[i+2] == 'o') or (music_string[i:i+3] in ['...||']):
                if music_string[i:i+3] == '..||':
                    music_list.append(0.5)
                    i += 3
                else:
                    music_list.append(1)
                    i += 3
            else:
                music_list.append(1)
                i += 1
    return music_list