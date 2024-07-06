def parse_music(music_string: str) -> List[int]:
    beats = [0]
    for char in music_string:
        if char == "o":
            beats.append(4)
        elif char == "o|":
            beats.extend([2, 2])
        elif char == ".|":
            beats.extend([1, 1, 1, 1])
        else:
            raise ValueError("Invalid character in music string")
    return beats[1:]