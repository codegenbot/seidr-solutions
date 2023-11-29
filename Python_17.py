from typing import List

def parse_music(music_string: str) -> List[int]:
    result = []
    for symbol in music_string:
        if symbol == "o":
            result.append(4)
        elif "|o|" in music_string:
            result.append(3)
        elif "|o" in music_string:
            result.append(2)
        elif symbol == "|":
            result.append(1)
        else:
            result.append(0)
    return result