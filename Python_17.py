```
def parse_music(music_string: str) -> List[int]:
    beats = [0, 0, 0]  # Initialize list for whole, half and quarter note
    result = []
    
    for char in music_string:
        if char == 'o':
            result.append(4)
        elif char == 'o|':
            result.append(2)
        elif char == '.|':
            result.append(1)

    return result