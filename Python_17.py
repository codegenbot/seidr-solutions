def parse_music(music_string: str) -> List[int]:
    music_notes = {"o": 4, "o|": 2, ".|": 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == ".":
            if music_string[i + 1] == "|":
                result.append(2)
                i += 2
            else:
                result.append(4)
                i += 1
        elif music_string[i : i + 2] in music_notes:
            result.append(music_notes[music_string[i : i + 2]])
            i += 2
    return result