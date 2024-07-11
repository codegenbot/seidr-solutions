```python
def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == 'o|':
            if i + 4 <= len(music_string) and music_string[i+4:i+6] == '|o|':
                music_list.append(8)
                i += 5
            else:
                music_list.append(2)
                i += 2
        elif music_string[i:i+3] == '.| ':
            if i + 7 <= len(music_string) and music_string[i+7:i+9] == '|.o':
                music_list.append(12)
                i += 8
            else:
                music_list.append(1)
                i += 3
        elif music_string[i] == 'o':
            if i + 2 <= len(music_string) and music_string[i+1:i+3] == 'o|':
                music_list.append(4)
                i += 3
            else:
                music_list.append(4)
                i += 1
    return music_list