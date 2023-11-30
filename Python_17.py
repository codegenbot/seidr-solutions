from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = music_string.split(' ')
    result = []
    for note in notes:
        if note == 'o':
            result.append(4)
        elif note == 'o|':
            result.append(2)
        else:
            result.append(1)
    return result

music_string = "o o| o"
print(parse_music(music_string))