```
def parse_music(music_string: str) -> List[int]:
    notes = ['o', 'o|', '.|']
    beats = [4, 2, 1]
    result = []
    
    for char in music_string:
        if char in notes[0]:
            result.append(beats[0])
        elif char == notes[1][0]:
            result.append(beats[1])
        elif char == notes[2][0]:
            result.append(beats[2])

    return result