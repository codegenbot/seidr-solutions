```
def parse_music(music_string: str) -> List[int]:
    note_lengths = {'o': 4, 'o|': 2, '.|': 1}
    beats_per_note = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '|':
            i += 1
        beats_per_note.append(note_lengths[music_string[i:i+2]])
        i += 2
    return beats_per_note