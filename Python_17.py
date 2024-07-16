```
def parse_music(music_string: str) -> List[int]:
    music = []
    beat_count = 0
    for char in music_string:
        if char == 'o':
            beat_count += 4
        elif char == 'o|':
            beat_count += 2
        elif char == '|':
            beat_count += 1
        else:
            music.append(beat_count)
            beat_count = 0
    music.append(beat_count)
    return music