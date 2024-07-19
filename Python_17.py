```
def parse_music(music_string: str) -> List[int]:
    notes = {'o': [4], 'o|': [2], '.|': [1]}
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            temp = []
            j = i
            while j < len(music_string) and (music_string[j] == '.' or music_string[j] == 'o'):
                if music_string[j] == 'o':
                    temp += notes['o']
                elif music_string[j] == '.':
                    temp.append(1)
                j += 1
            i = j
            beats.extend(temp)
        elif music_string[i] == 'o':
            temp = []
            j = i
            while j < len(music_string) and (music_string[j] == '.' or music_string[j] == 'o'):
                if music_string[j] == 'o':
                    temp += notes['o']
                elif music_string[j] == '.':
                    temp.append(4)
                j += 1
            i = j
            beats.extend(temp)
        elif music_string[i] == '|':
            i += 1
            beats.append(notes.get('o|', [2]))
    return beats