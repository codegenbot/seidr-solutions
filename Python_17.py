def parse_music(music_string: str) -> List[int]:
    beats = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if i+3 <= len(music_string) - 1:
                i += 3
            else:
                break
        else:
            note = music_string[i:i+2]
            if i+2 > len(music_string) - 1:
                break
            i += 2
            result.append(beats.get(note, 0))
    return result