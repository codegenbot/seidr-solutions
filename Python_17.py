def parse_music(music_string: str) -> List[int]:
    beats = [4, 2, 1]
    result = []
    note = ""
    for char in music_string:
        if char in ["o", "o|"]:
            note = "o"
        elif char == ".":
            note = "."
        elif char == "|":
            if note == "o":
                result.append(beats[0])
            else:
                result.append(beats[1] if note == "." else beats[2])
            note = ""
    if note in ["o", "."]:
        if note == "o":
            result.append(beats[0])
        else:
            result.append(beats[2])
    return result