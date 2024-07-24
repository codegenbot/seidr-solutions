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
                    beat.append(notes[music_string[i:i+2]][0])
                elif music_string[i] in 'do':
                    beat.append(int(music_string[i+1]))
                i += 1
            beats.extend(beat)
        elif music_string[i:i+2] in notes:
            beat = notes[music_string[i:i+2]]
            if isinstance(beat, list):
                beats.extend(beat)
            else:
                beats.append(beat[0])
            i += 2
        else:
            return []
    return beats