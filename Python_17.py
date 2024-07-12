def parse_music(music_string: str) -> List[int]:
    beats = [0] * (len(music_string) // 3 + 1)
    i = 0
    for note in music_string:
        if note == "o":
            beats[i] += 4
        elif note == "|":
            beats[i] += 2
        else:
            beats[i] += 1
        if note != "|":
            i += 1
    return beats[: i + 1]