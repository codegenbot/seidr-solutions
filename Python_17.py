```
def parse_music(music_string: str) -> list:
    beats = [4, 2, 1]  
    result = []
    
    for note in music_string.split():
        if note == 'o':
            result.extend([beats[0]]*int(note[-1]))
        elif note == 'o|':
            result.extend([beats[1]]*int(note[:-1]))
        elif note == '.|':
            result.extend([beats[2]]*int(note[:-1]))
    
    return result