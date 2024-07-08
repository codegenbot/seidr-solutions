```
def parse_music(music):
    beats = []
    beat_count = 0
    for char in music:
        if char == 'o':
            beat_count += 4
        elif char == 'o|':
            beat_count += 2
        elif char == '.| ':
            beat_count += 1
        else:
            beats.append(beat_count)
            beat_count = 0
    beats.append(beat_count)
    return beats