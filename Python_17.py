```
def parse_music(music_string: str) -> List[int]:
    music_list = []
    note_dict = {'o': 4, 'o|': 2, '.|': 1}
    
    for char in music_string:
        if char == '|':
            music_list.append(note_dict.get(char + '', note_dict['o']))
        else:
            music_list.append(note_dict[char])
    
    return music_list