from typing import List


def parse_music(music_string: str) -> List[int]:
    beats = {"o": 4, ".": 2}
    result = []
    note = ""
    for char in music_string:
        if char in beats:
            note += char
        else:
            if note:
                if len(note) == 1:
                    result.append(beats[note[0]])
                elif len(note) == 2:
                    result.append(beats[note[1]])
                else:
                    result.append(beats[note[0]])
                note = ""
    return result