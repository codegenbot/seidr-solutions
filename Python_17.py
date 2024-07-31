from typing import List


def parse_music(music_string: str) -> List[int]:
    result = []
    notes = {"o": 4, "o|": 2, ".|": 1}
    current_note = ""

    for char in music_string:
        if char in ["o", "|"]:
            current_note += char
        elif char == "." and current_note == ".|":
            result.append(notes[current_note])
            current_note = ""
        elif char == " ":
            if current_note != "":
                result.append(notes[current_note])
                current_note = ""

    if current_note != "":
        result.append(notes[current_note])

    return result