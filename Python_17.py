from typing import List

def parse_music(music_string: List[str]) -> List[int]:
    result = []
    for note in music_string:
        if note == "o":
            result.append(4)
        elif note == "o|":
            result.append(2)
        else:
            result.append(1)
    return result

music_string = input().strip().split(",")
print(parse_music(music_string))