def parse_music(music_string: str) -> List[int]:
    note_map = {"o": 4, "o|": 2, ".|": 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == ".":
            if i + 3 <= len(music_string) and music_string[i : i + 3] in note_map:
                i += 2
            else:
                raise ValueError("Invalid input")
        elif music_string[i : i + 1] in note_map:
            result.append(note_map[music_string[i : i + 1]])
            i += 1
        else:
            raise ValueError("Invalid input")
    return result