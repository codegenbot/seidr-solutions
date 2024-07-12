```
def parse_music(music_string: str) -> list:
    if not isinstance(music_string, str):
        return []

    music_string = music_string.replace(" ", "")

    if len(music_string) < 3 or not set(music_string[:3]).issubset({"o", "|", "."}):
        return []

    if not music_string[0].isalnum():
        raise Exception

    music_list = []
    i = 0
    while i < len(music_string):
        if not music_string[i].isalnum():
            i += 1
            continue

        if music_string[i:i+2] == "o|":
            music_list.append(2)
            i += 2
        elif music_string[i:i+3] == "|.|":
            music_list.append(1)
            i += 3
        elif music_string[i:i+5] == "..|.||.|":
            music_list.append(0.5)
            i += 5
        elif music_string[i:i+2] == "o o":
            if not music_string[i+1].isalnum() or not music_string[i+1:i+2] == "|":
                return []
            music_list.append(4)
            i += 2
        elif music_string[i:i+3] == "o o|":
            music_list.append(4)
            i += 3

    if i < len(music_string):
        return []

    return music_list