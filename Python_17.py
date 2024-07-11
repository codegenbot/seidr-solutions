```
def parse_music(music_string: str) -> List[int]:
    music_notes = {'o': 4, 'o|': 2, '.|': 1}
    parsed_music = []
    
    i = 0
    while i < len(music_string):
        if i + 3 <= len(music_string) and music_string[i:i+3] in music_notes:
            parsed_music.append(music_notes[music_string[i:i+3]])
            i += 3
        else:
            for j, note in enumerate(['o', 'o|', '.|']):
                if music_string[i:i+len(note)] == note:
                    parsed_music.append(music_notes[note])
                    i += len(note)
                    break
    
    return parsed_music