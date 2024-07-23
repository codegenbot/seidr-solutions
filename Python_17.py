def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            music_list.append(3)
            i += 2
        elif music_string[i:i+4] == '.||||':
            music_list.append(1)
            i += 4
        elif music_string[i:i+6] == 'oooou':
            music_list.append(2)
            i += 6
        elif music_string[i] == 'o':
            if i + 3 <= len(music_string):
                if music_string[i:i+3] == 'ooo': 
                    music_list.append(0) 
                    i += 3 
                else: 
                    music_list.append(4)
                    i += 1
            else:
                music_list.append(4)
                i += 1
    return music_list