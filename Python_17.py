```
def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    music_list = []
    current_note = ''
    for char in music_string:
        if char in beats_per_note:
            if current_note:
                music_list.append(beats_per_note[current_note])
            current_note = char
        else:
            raise ValueError("Invalid character in the input string")
    music_list.append(beats_per_note[current_note])
    return music_list