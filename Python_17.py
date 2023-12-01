def parse_music(music_string: str) -> List[int]:
    music_list = music_string.split()
    beats = []
    for note in music_list:
        if 'o' in note:
            beats.append(4)
        elif '|o' in note:
            beats.append(2)
        elif '|.' in note:
            beats.append(1)
    return beats