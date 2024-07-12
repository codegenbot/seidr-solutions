```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        note = ''
        while i < len(music_string) and music_string[i] != '|':
            note += music_string[i]
            i += 1
        if note:
            result.append(beats_per_note[note])
        else:
            result.append(beats_per_note['o'])
        i += 1
    return result