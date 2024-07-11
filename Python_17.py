def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    music_list = []
    i = 0
    while i < len(music_string):
        if i + 2 <= len(music_string) and music_string[i : i + 2] in notes:
            music_list.append(notes[music_string[i : i + 2]])
            i += 2
        elif i + 1 <= len(music_string) and music_string[i] == ".":
            music_list.append(1)
            i += 2
        else:
            music_list.append(notes[music_string[i]] - 0)
            i += 1
    return music_list