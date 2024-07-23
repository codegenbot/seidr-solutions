```
def parse_music(music_string):
    if not isinstance(music_string, str):
        raise ValueError("Invalid input type")
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == "o|":
            if i + 3 <= len(music_string) and music_string[i:i+3].replace("|", "") != "o o":
                music_list.append(4)
                i += 3
            else:
                i += 1
        elif music_string[i:i+6].replace("|", "") in ["....", ".."]:
            if music_string[i:i+6].replace("|", "") == "....":
                music_list.append(1)
            else:
                music_list.append(0.5)
            i += 6
        elif music_string[i:i+8].replace("|", "") in ["..|..", "...|..."]:
            if music_string[i:i+8].replace("|", "") == "..|..":
                music_list.append(0.5)
            else:
                music_list.append(1)
            i += 8
        elif music_string[i:i+2] == "e|":
            music_list.append(2)
            i += 2
        else:
            raise ValueError("Invalid input format")
    return music_list