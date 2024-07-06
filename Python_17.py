def parse_music(music_string: str) -> list:
    if not music_string:
        return []
    
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            if i+1 < len(music_string) and music_string[i+1] == '|':
                music_list.append(2)
                i += 2
            elif i+3 <= len(music_string) and music_string[i:i+3] == '.|o':
                music_list.append(3)
                i += 3
            else:
                if i+1 <= len(music_string):
                    music_list.append(4)
                    i += 1
        elif i+2 <= len(music_string) and music_string[i:i+2] == 'o|':
            music_list.append(2)
            i += 2
        elif i+4 <= len(music_string) and music_string[i:i+3] == 'o o|':
            if i+5 <= len(music_string) and music_string[i+1:i+4] == 'o o o':
                music_list.append(0)
                i += 4
            else:
                music_list.append(1)
                i += 3
        else:
            print("Invalid input")
        i += 1
    return music_list