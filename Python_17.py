from typing import List

def parse_music(music_string: str) -> List[int]:
    result = []
    for char in music_string:
        if char == "o":
            result.append(4)
        elif char == "|o|":
            result.append(3)
        elif char == "|o":
            result.append(2)
        elif char == "|":
            result.append(1)
        else:
            result.append(0)
    return result