from typing import List

def parse_music(music_string: str) -> List[int]:
    result = []

    for i in range(0, len(music_string), 2):
        note = music_string[i:i+2]
        if note == "o|":
            result.append(2)
        elif note == "||":
            result.append(1)
        else:
            result.append(0)

    return result