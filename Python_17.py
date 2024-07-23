from typing import List

def parse_music(music_string: str) -> List[int]:
    beats = [4, 2, 1]  
    result = []
    
    for note in music_string.split():
        if note == 'o':
            result.extend(beats)
        elif note == 'o|':
            result.extend(beats[1:2])
        elif note == '.|':
            result.append(1)