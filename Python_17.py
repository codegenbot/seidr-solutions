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
                if music_string[i:i+2] in notes:
                    note = notes[music_string[i:i+2]]
                    i += 2
                    if isinstance(note, list):
                        beat.extend(note)
                    else:
                        beat.append(note)
                elif music_string[i] == '.':
                    beat.append(1)
                    i += 1
                else:
                    return []
            beats.append(beat)
        elif music_string[i:i+2] in notes:
            note = notes[music_string[i:i+2]]
            i += 2
            if isinstance(note, list):
                beats.extend(note)
            else:
                beats.append(note)
        else:
            return []
    return beats