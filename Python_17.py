```
def parse_music(music_string: str) -> list:
    if not music_string:
        return []
    
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+3] == '.|o':
            music_list.append(3)
            i += 3
        elif music_string[i] == 'o' and (i+1 < len(music_string) and music_string[i+1] == '|'):
            music_list.append(2)
            i += 2
        elif music_string[i] == 'o':
            if i+1 <= len(music_string):
                music_list.append(4)
                i += 1
        elif music_string[i:i+3] == '.|':
            music_list.append(1)
            i += 3
        else:
            print("Invalid input")
        i += 1
    if i < len(music_string):
        print("Remaining characters: ", music_string[i:])
    return music_list