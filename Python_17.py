def parse_music(music_string: str) -> List[int]:
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i] == 'o':
            beats.append(4)
            i += 1
        elif music_string[i:i+2] == 'o|':
            beats.append(2)
            i += 2
        elif music_string[i:i+3] == '.|..|__':
            beat = [1, 1, 1]
            for _ in range(int((music_string[i+3:]).index('|') / 4)):
                beat.extend([1, 0])
            beats.append(beat)
            i += 5
    return beats