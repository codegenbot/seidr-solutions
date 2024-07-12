```
def parse_music(music_string: str) -> List[int]:
    music_list = []
    durations = {'W': 4, 'H': 2, 'Q': 1}
    i = 0
    while i < len(music_string):
        if music_string[i] in durations:
            music_list.append(durations[music_string[i]])
            i += 1
        elif music_string[i:i+3] == '.W|':
            music_list.append(1)
            i += 3
        elif music_string[i:i+4] == 'W.W|':
            music_list.append(2)
            i += 4
    return music_list