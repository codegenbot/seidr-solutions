```
def parse_music(music_string: str) -> List[int]:
    note_lengths = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    temp_length = 0
    for char in music_string:
        if char == '|':
            result.append(temp_length)
            temp_length = 0
        elif char != '.':
            temp_length += note_lengths[char]
    result.append(temp_length)
    return result