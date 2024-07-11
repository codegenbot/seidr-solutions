def parse_music(music_string: str) -> List[int]:
    music_notes = {"o": 4, "o|": 2, ".|": 1}
    result = []
    i = 0
    while i < len(music_string):
        if i + 2 <= len(music_string) and music_string[i : i + 2] in music_notes:
            result.append(music_notes[music_string[i : i + 2]])
            i += 2
        elif i + 1 <= len(music_string) and music_string[i] in music_notes:
            result.append(music_notes[music_string[i]])
            i += 1
        else:
            raise ValueError("Invalid input")
    return result