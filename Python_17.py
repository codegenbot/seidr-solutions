```Python
from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '|':
            i += 1
        note = music_string[i:i+2]
        i += 2
        if note in notes:
            result.append(notes[note])
    return result

# Example usage:
music = 'o|ooo.o|.||oo'
print(parse_music(music))