from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    result = []
    temp_note = ""
    for char in music_string:
        if char == " ":
            if temp_note != "":
                result.append(notes.get(temp_note, 0))
                temp_note = ""
        elif char not in notes:
            continue
        else:
            temp_note += char
    if temp_note != "":
        result.append(notes.get(temp_note, 0))
    return result