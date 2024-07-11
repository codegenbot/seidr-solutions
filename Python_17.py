from typing import List


def parse_music(music_string: str) -> List[int]:
    beats = [4, 2, 1]
    result = []
    note = ""
    for char in music_string:
        if char.isalpha():
            note += char
        else:
            if note:
                if len(note) == 3 or (len(note) > 0 and not note[0].isalpha()):
                    result.append(beats[2])
                elif len(note) >= 1 and len(note) <= 2:
                    result.append(beats[1] if len(note) == 1 else beats[0])
                else:
                    result.append(beats[0])
                note = ""
    return result