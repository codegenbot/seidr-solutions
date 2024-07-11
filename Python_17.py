from typing import List

def parse_music(music_string: str) -> List[int]:
    beats = [4, 2, 1]
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+3] == 'o..':
            result.extend(beats[:1])
            i += 3
        elif music_string[i:i+4] == 'o||':
            result.extend(beats[1:2])
            i += 3
        elif music_string[i:i+5] == 'o|||':
            result.extend(beats)
            i += 4
    return result