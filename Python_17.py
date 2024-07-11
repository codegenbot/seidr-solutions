def parse_music(music_string: str) -> List[int]:
    beats = [0, 4, 2, 1]
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == ".":
            result.append(beats[3])
        elif music_string[i : i + 2] == "o|":
            result.append(beats[2])
        elif music_string[i : i + 2] == ".|":
            result.append(beats[1])
        elif music_string[i] == "o":
            result.append(beats[0])
        i += 1
    return result