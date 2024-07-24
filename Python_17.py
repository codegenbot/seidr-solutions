```
from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    music_string = input("Enter music notes and rests (separated by spaces or commas): ")
    if not music_string:
        return []
    music_string = music_string.replace(",", " ")  
    beats = parse_music(music_string.strip())
    i = 0
    while i < len(beats):
        if beats[i] == '|':
            i += 1
        elif beats[i:i+2] in notes:
            beats.append(notes[beats[i:i+2]])
            i += 2
        else:
            return []
    return beats