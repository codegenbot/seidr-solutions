def parse_music(music_string: str) -> List[int]:
    beats = [0]
    for char in music_string:
        if char == "o":
            beats[-1] += 4
        elif char == "o|":
            beats[-1] += 2
        elif char == ".|":
            beats[-1] += 1
        else:
            beats.append(0)
    return beats