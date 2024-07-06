def parse_music(music_string: str) -> List[int]:
    beats = [0] * (len(music_string) // 3 + 1)
    i = 0
    for note in music_string:
        if note == "o":
            beats[i] += 4
        elif note == "|":
            beats[i] += 2
        elif note == ".":
            beats[i] += 1
        else:
            raise ValueError("Invalid note")
        i = (i + 1) % len(beats)
    return beats[: i + 1]