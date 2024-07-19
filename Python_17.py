Here is the completed code:

def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            i += 1
        note = ''
        while music_string[i].in('.|'):
            note += music_string[i]
            i += 1
        result.append(beats_per_note[note])
    return result