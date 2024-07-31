```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    parsed_music = []
    current_beats = 0
    for note in music_string.split():
        if note in beats_per_note:
            current_beats += beats_per_note[note]
            parsed_music.append(current_beats)
            current_beats = 0
        else:
            raise ValueError("Invalid musical note")
    return parsed_music