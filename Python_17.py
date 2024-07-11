```
def parse_music(music_string: str) -> List[int]:
    music_notes = []
    beat_count = 0
    for note in music_string:
        if note == 'o':
            beat_count += 4
        elif note == '|':
            beat_count += 2
        elif note == '.':
            beat_count += 1
        else:
            raise ValueError("Invalid note")
        if note not in ['|', '.']:
            music_notes.append(beat_count)
            beat_count = 0
    return music_notes