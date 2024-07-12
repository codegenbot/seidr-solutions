def parse_music(music_string: str) -> list:
    if len(music_string) % 2 != 0:
        raise ValueError("Program did not receive expected input")
    
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            music_list.append(2)
            i += 2
        elif music_string[i:i+3] == '| .|':
            music_list.append(1)
            i += 3
        elif music_string[i:i+5] == '..|.||.|':
            music_list.append(0.5)
            i += 5
        elif music_string[i:i+2] == 'o o':
            music_list.append(4)
            i += 2
        elif music_string[i:i+3] == 'o o|':
            if music_string[i:i+2] == 'o o':
                music_list.append(4)
                i += 2
            else:
                music_list.append(2)
                i += 3
        if i < len(music_string) and not music_string[i].isalnum():
            i += 1
    return music_list