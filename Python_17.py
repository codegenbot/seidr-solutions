```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    music_list = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            note_type = ''
            for j in range(i, min(i+3, len(music_string))):
                note_type += music_string[j]
            music_list.append(beats_per_note[note_type])
            i += 2
        else:
            music_list.append(beats_per_note[music_string[i]])
            i += 1
    return music_list