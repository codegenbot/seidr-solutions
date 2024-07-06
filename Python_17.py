Here is the corrected code:

```
def parse_music(music_string: str) -> list:
    if not music_string:
        return []

    music_list = []
    i = 0

    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            music_list.append(1)
            i += 2
        elif music_string[i:i+3] == '.|o':
            music_list.append(2)
            i += 3
        elif music_string[i:i+4].endswith('|o|'):
            if music_string[i:i+4].startswith('ooo|'):
                music_list.append(0)
            else:
                music_list.append(1)
            i += 4
        elif music_string[i:i+2] == 'o|':
            music_list.append(3)
            i += 2
        else:
            print("Invalid input")
        i += 1

    return music_list