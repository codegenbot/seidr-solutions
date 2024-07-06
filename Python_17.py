from typing import List


def parse_music() -> List[int]:
    music_string = input()
    beats = [0]
    for note in music_string.split():
        if note == "o":
            beats.append(4)
        elif note == "o|":
            beats.append(2)
        elif note == ".|":
            beats.append(1)
    return beats[1:]