```
def parse_music(music_string: str) -> List[int]:
    music_list = []
    beat_count = 0
    note_map = {'o': 4, 'o|': 2, '.|': 1}
    
    for char in music_string:
        if char == '|':
            music_list.append(beat_count)
            beat_count = 0
        elif char in note_map:
            beat_count += note_map[char]
    
    music_list.append(beat_count)
    return music_list