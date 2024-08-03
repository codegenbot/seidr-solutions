def parse_music(music_string: str) -> List[int]:
    beats = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            result.append(beats['.|'])
            i += 3
        else:
            result.append(beats[f'{music_string[i-1:i+1]}'])
            i += 2