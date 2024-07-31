```
def parse_music(music_string: str) -> List[int]:
    notes = ['o', 'o|', '.|']
    beats = [4, 2, 1]
    result = []
    
    for note in music_string.split():
        if note not in notes:
            return []  # or raise an exception
        result.append(beats[notes.index(note)])
    
    return result