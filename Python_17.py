from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {".|": 1, "o|": 2, "oo": 4}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == ".":
            note_type = music_string[i : i + 3]
            i += 3
            result.append(notes.get(note_type, notes["o|"]))
        else:
            note_type = music_string[i : i + 2]
            i += 2
            result.append(notes[note_type])
    return result