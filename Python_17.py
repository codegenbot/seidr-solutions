```Python
from typing import List


def parse_music(music_string: str) -> List[int]:
    result = []
    notes = music_string.split()
    for note in notes:
        if note == "o":
            result.append(4)
        elif note == "o|":
            result.append(2)
        elif note == ".|":
            result.append(1)
        else:
            result.append(0)  # append 0 when no match
    return result