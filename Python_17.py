```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    music_list = []
    i = 0
    while i < len(music_string):
        note = ''
        while i < len(music_string) and (note := music_string[i:i+2]).endswith('|'):
            i += 2
            if note == 'o|':
                note = 'o'
            else:
                note = '.'
        if not note:
            continue
        music_list.append(beats_per_note[note])
        i += len(note)
    return music_list