from typing import List


def parse_music(music_string: str) -> List[int]:
    beats = [4, 2, 1]
    result = []
    note = ""
    for char in music_string:
        if char == "o":
            note += "o"
        elif char == ".":
            note += "."
        else:
            if note:
                if len(note) == 1:
                    result.append(beats[0])
                elif len(note) == 2:
                    result.extend([beats[1]] * len(note))
                else:
                    result.extend([beats[2]] * len(note))
                note = ""
    return result