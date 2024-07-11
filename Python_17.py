```
def parse_music(music_string: str) -> List[int]:
    beats = [0, 2, 1]  # quater note is 1 beat
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if music_string[i+1] == '|':
                result.append(beats[1])  # half note
            else:
                result.append(beats[2])  # quater note
            i += 2
        elif music_string[i] == 'o':
            if music_string[i+1] == '|':
                result.append(2)  # whole note with stem, lasts two beats
            else:
                result.append(4)  # whole note, lasts four beats
            i += 2
    return result