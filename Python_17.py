```
def parse_music(music_string: str) -> list:
    notes = {'o': [4], 'o|': [2, 1], '.|': [1]}
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '|':
            beat = []
            i += 1
            while i < len(music_string) and music_string[i] != '|':
                note = ''
                while i < len(music_string) and music_string[i] != '|':
                    note += music_string[i]
                    i += 1
                if note in notes:
                    beat.extend(notes[note])
                else:
                    return []
            beats.append(beat)
        elif music_string[i:i+2] in notes:
            beats.extend(notes[music_string[i:i+2]])
            i += 2
        else:
            return []
    return beats