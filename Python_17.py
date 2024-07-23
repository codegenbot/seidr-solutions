def parse_music(music_string: str) -> List[int]:
    note_lengths = {"o": 4, "o|": 2, ".|": 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == ".":
            if i + 3 > len(music_string) - 1:
                break
            note_type = music_string[i : i + 3]
            i += 3
        else:
            if i + 2 > len(music_string) - 1:
                break
            note_type = music_string[i : i + 2]
            i += 2
        if note_type in note_lengths:
            result.append(note_lengths[note_type])
    return result