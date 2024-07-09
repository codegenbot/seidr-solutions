from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {"o": 4, "o|": 2, ".|": 1}
    result = []
    note_index = 0
    while note_index < len(music_string):
        if music_string[note_index] == ".":
            result.append(beats_per_note[".|"])
            note_index += 3
        elif music_string[note_index : note_index + 2] == "o|":
            result.append(beats_per_note["o|"])
            note_index += 2
        else:
            result.append(beats_per_note["o"])
            note_index += 1
    return result