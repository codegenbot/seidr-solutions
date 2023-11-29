from typing import List


def parse_music() -> List[int]:
    music_notes = []
    music_string = input()
    for note in music_string:
        if note == "o":
            music_notes.append(4)
        elif note == "o|":
            music_notes.append(2)
        elif note == "|":
            music_notes.append(1)
        else:
            music_notes.append(0)
    return music_notes