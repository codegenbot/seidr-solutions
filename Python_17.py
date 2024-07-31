```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    current_beats = 0
    for char in music_string:
        if char == '|':
            continue
        if char != '.':
            current_beats += beats_per_note[char]
        else:
            current_beats += 1
        if char in ['o', 'o|']:
            result.append(current_beats)
            current_beats = 0
    return result