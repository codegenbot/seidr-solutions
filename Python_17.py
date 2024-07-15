```
def parse_music(music_string: str) -> list:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            music_list.append(2)
            i += 2
        elif music_string[i:i+3] == '.|..|':
            music_list.append([8, 4, 2])
            i += 3
        elif music_string[i:i+1] == 'o':
            if i + 5 <= len(music_string) and music_string[i:i+6].endswith('o'):
                music_list.append(16)
                i += 6
            else:
                music_list.append(4)
                i += 1
        elif music_string[i:i+2] == 'o o':
            if i + 5 <= len(music_string) and music_string[i:i+6].endswith('o'):
                music_list.append([16, 8, 4])
                i += 6
            else:
                music_list.append([4, 2])
                i += 2
        elif music_string[i:i+3] == '..|..':
            if i + 7 <= len(music_string) and music_string[i:i+8].endswith('o'):
                music_list.append([32, 16, 8, 4])
                i += 8
            else:
                music_list.append([8, 4, 2])
                i += 3
        elif music_string[i:i+1] == '.':
            if i + 5 <= len(music_string) and music_string[i:i+6].endswith('o'):
                music_list.append([16, 8, 4, 2])
                i += 6
            else:
                music_list.append([4, 2])
                i += 1
    return music_list