```
def parse_music(music_string):
    if not isinstance(music_string, str):
        raise ValueError("Invalid input type")
    music_list = []
    i = 0
    while i < len(music_string):
        if i + 2 <= len(music_string) and music_string[i:i+2] == "o|":
            music_list.append(4)
            i += 2
        elif i + 6 <= len(music_string) and (music_string[i:i+6].replace("|", "") in ["....", ".."]):
            if music_string[i:i+6].replace("|", "") == "....":
                music_list.append(1)
            else:
                music_list.append(0.5)
            i += 6
        elif i + 8 <= len(music_string) and (music_string[i:i+8].replace("|", "") in ["..|..", "...|..."]):
            if music_string[i:i+8].replace("|", "") == "..|..":
                music_list.append(0.5)
            else:
                music_list.append(1)
            i += 8
        elif i + 2 <= len(music_string) and music_string[i:i+2] == "e|":
            music_list.append(2)
            i += 2 
        else:
            raise ValueError("Invalid input format")
    return music_list