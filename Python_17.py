```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    music_list = []
    note = ''
    for char in music_string:
        if char in ['o', 'o|', '.|']:
            music_list.append(beats_per_note[note])
            note = char
        else:
            note += char
    music_list.append(beats_per_note[note])
    return music_list