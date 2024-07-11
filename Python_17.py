```
def parse_music(music_string: str) -> List[int]:
    beats = [4, 2, 1]
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            music_list.append(1)
            i += 3
        elif music_string[i] == 'o':
            music_list.append(4)
            i += 2
        else:
            if music_string[i] == '|':
                music_list.append(beats[0])
                i += 5
            else:
                music_list.append(beats[1])
                i += 3
    return music_list