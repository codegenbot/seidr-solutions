from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {"o": 4, "o|": 2, ".|": 1}
    result = []
    current_note = ""

    for char in music_string:
        if char in ["o", "o|"]:
            current_note += "o"
        elif char == ".":
            current_note += "|"
        elif char == "|":
            if current_note:
                if current_note == "o|" * 2 or current_note == ".|||":
                    result.append(notes.get(current_note, 0))
                else:
                    total = notes[current_note.replace("|", "")]
                    while current_note.count("|") > 1:
                        current_note = current_note.replace("||", "|")
                        total += notes["o"]
                    result.append(total)
                current_note = ""

    if current_note:
        if current_note == "o|" * 2 or current_note == ".|||":
            result.append(notes.get(current_note, 0))
        else:
            total = notes[current_note.replace("|", "")]
            while current_note.count("|") > 1:
                current_note = current_note.replace("||", "|")
                total += notes["o"]
            result.append(total)
    return result