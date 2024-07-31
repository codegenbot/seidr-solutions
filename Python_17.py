```
def parse_music(music_string: str) -> List[int]:
    music_notes = {'o': 4, 'o|': 2, '.|': 1}
    beats_per_note = []
    
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if i + 3 <= len(music_string) and music_string[i:i+3] in music_notes:
                beats_per_note.append(music_notes['.|'])
                i += 2
            else:
                raise ValueError('Invalid input')
        elif music_string[i] == 'o':
            if i + 1 < len(music_string) and music_string[i+1] == '|':
                beats_per_note.append(music_notes['o|'])
                i += 2
            else:
                beats_per_note.append(music_notes['o'])
                i += 1
        elif music_string[i:i+2] in music_notes:
            beats_per_note.append(music_notes[music_string[i:i+2]])
            i += 2
    return beats_per_note