```
def parse_music(music_string: str) -> List[int]:
    music_list = []
    notes = {'o': 4, 'o|': 2, '.|': 1}
    i = 0
    while i < len(music_string):
        for note in notes:
            if music_string[i:i+len(note)] == note:
                music_list.append(notes[note])
                i += len(note)
                break
    return music_list