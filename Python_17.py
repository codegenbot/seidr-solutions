from typing import List

def parse_music(music_string: str) -> List[int]:
    result = []
    count = 1

    for char in music_string:
        if char == "o":
            result.append(4)
            count = 1
        elif char == "|":
            result.append(count)
            count = 1
        else:
            count += 1

    return result