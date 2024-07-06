Here is the modified code:

```python
def parse_music(music_string: str) -> list:
    if not music_string:
        return []

    music_list = []
    i = 0

    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            music_list.append(2)
            i += 2
        elif music_string[i:i+3] == '.|o':
            music_list.append(3)
            i += 3
        elif music_string[i] == 'o' and (i+1 < len(music_string) and music_string[i+1] == '|'):
            music_list.append(2)
            i += 2
        elif music_string[i:i+4] == 'o o|':
            if i+5 <= len(music_string) and music_string[i+1:i+4] == 'o o o':
                music_list.append(0)
                i += 4
            else:
                music_list.append(1)
                i += 3
        elif music_string[i] == 'o' and (i+1 <= len(music_string) and music_string[i+1] == '|'):
            if i+2 < len(music_string) and music_string[i+1:i+2] == '|':
                music_list.append(4)
            else:
                print("Invalid input")
            i += 2
        elif music_string[i] == 'o' and (i+1 <= len(music_string) and music_string[i+1] == '|'):
            if i+2 < len(music_string) and music_string[i+1:i+2] == '|':
                music_list.append(4)
            else:
                print("Invalid input")
            i += 2
        else:
            print("Invalid input")
        i += 1

    return music_list