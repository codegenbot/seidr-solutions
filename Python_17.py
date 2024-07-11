def parse_music(music_string: str) -> List[int]:
    note_lengths = {"o": 4, "o|": 2, ".|": 1}
    music_list = []
    beat = 0
    for char in music_string:
        if char == "o":
            beat += 4
        elif char == "o|":
            beat += 2
        elif char == ".":
            beat += 1
    return [beat - i * 4 for i in range(len(music_list) + 1)]