```
def parse_music(music_string: str) -> List[int]:
    beats = [4, 2, 1] 
    parsed_music = []
    
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            parsed_music.append(beats[0])
            i += 3
        elif music_string[i:i+2] == 'o|':
            parsed_music.append(beats[1])
            i += 2
        elif music_string[i:i+2] == '.|':
            parsed_music.append(beats[2])
            i += 2
    
    return parsed_music