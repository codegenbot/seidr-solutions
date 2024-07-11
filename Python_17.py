Here is the completed code:

def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '|':
            i += 1
        note = music_string[i:i+3]
        i += 3
        beats.append(notes[note])
    return beats