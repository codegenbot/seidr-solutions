def parse_music(music_string: str) -> List[int]:
    beats = [0] * len(music_string)
    i = 0
    while i < len(music_string):
        if music_string[i] == "o":
            beats[i : i + 2] = [4, 4]
            i += 2
        elif music_string[i] == "o|":
            beats[i : i + 2] = [2, 2]
            i += 2
        elif music_string[i] == ".|":
            beats[i] = 1
            i += 2
    return beats