Here is the completed Python function:

```
def parse_music(music_string: str) -> List[int]:
    music_notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        note_length = music_notes.get(music_string[i:i+2])
        if note_length:
            i += 2
        else:
            note_length = music_notes.get(music_string[i])
            i += 1
        result.append(note_length)
    return result