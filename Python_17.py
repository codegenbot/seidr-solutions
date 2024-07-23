```
def parse_music(music_string):
    if not isinstance(music_string, str):
        raise ValueError("Invalid input type")
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] == "o|":
            music_list.append(4)
            i += 2
        elif music_string[i:i+6] in [".|..|.||.|..|", ".|..|..|...|..|.."]:
            if music_string[i:i+6] == ".|..|.||.|..|":
                music_list.append(1)
            else:
                music_list.append(0.5)
            i += 6
        elif music_string[i:i+8] in ["..|.|..|...|..|.|..|", "..|..|..|...|..|..|.."]:
            if music_string[i:i+8] == "..|.|..|...|..|.|..|":
                music_list.append(0.5)
            else:
                music_list.append(1)
            i += 8
        else:
            raise ValueError("Invalid input format")
    return music_list