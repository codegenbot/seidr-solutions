from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = music_string.split(" ")
    result = []
    for note in notes:
        if note == "o":
            result.append(1)
        elif note == "o|":
            result.append(2)
        else:
            result.append(int(note))
    return result


music_string = "4 2 1 4 1 2 1"
print(parse_music(music_string))