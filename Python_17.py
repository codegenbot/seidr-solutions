from typing import List


def parse_music(music_string: str) -> List[int]:
    music_notes = {"o": 4, "o|": 2, ".|": 1}
    result = []
    temp_note = ""

    for char in music_string:
        if char == "|" and temp_note:
            result.append(music_notes[temp_note])
            temp_note = ""
        elif char in music_notes:
            temp_note += char
    if temp_note:
        result.append(music_notes[temp_note])

    return result