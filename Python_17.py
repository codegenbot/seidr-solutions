```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    music_list = []
    temp = ''
    for char in music_string:
        if char in beats_per_note:
            if temp:
                music_list.append(beats_per_note[temp])
                temp = ''
            temp += char
    if temp:
        music_list.append(beats_per_note[temp])
    return music_list