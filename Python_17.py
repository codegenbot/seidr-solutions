```
from typing import List

def parse_music(music_string: str) -> List[int]:
    note_lengths = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            temp = ''
            j = i + 1
            while j < len(music_string) and (music_string[j] != '.' or len(temp) % 2 != 0):
                temp += music_string[j]
                j += 1
            i = j
        else:
            temp = music_string[i:i+2].strip('.')
            i += 2
        if temp in note_lengths:
            result.append(note_lengths[temp])
    return result