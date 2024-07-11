```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    music_list = []
    note = ''
    for char in music_string:
        if char not in ['o', 'o|', '.', '|']:
            note += char
        else:
            if note:
                music_list.append(beats_per_note[note])
            note = ''
    if note:
        music_list.append(beats_per_note[note])
    return music_list