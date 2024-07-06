```
def parse_music(music_string: str) -> List[int]:
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == "do":
            music_list.append(4)
            i += 2
            while i < len(music_string) and music_string[i] != "mi":
                i += 1
        elif music_string[i:i+3] == "re|":
            music_list.append(2)
            i += 3
        elif music_string[i:i+5] == "fa la |":
            music_list.append(1)
            i += 5
    return music_list