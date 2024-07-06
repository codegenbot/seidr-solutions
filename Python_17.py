```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '|':
            i += 1
        note = ''
        while i < len(music_string) and (note := music_string[i]).endswith(('.|' or 'o')):
            note = note[:-1]
            i += 1
        music_list.append(notes[note])
    return music_list