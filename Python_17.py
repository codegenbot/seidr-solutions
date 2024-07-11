from typing import List

def parse_music(music_string: str) -> List[int]:
    beats = [4, 2, 1]
    result = []
    note = ''
    for char in music_string:
        if char == 'o' or char == '.':
            note += char
        else:
            if note:
                if len(note) == 1:
                    result.extend([beats[0]]*len(note))
                elif len(note) == 2:
                    result.extend([beats[1]]*len(note))
                else:
                    result.extend([beats[2]]*len(note))
                note = ''
    return result