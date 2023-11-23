from typing import List

def parse_music(music_string: str) -> List[int]:
    durations = {'4': 4, '2': 2, '1': 1}
    return [durations[note] for note in music_string.split()]

output = parse_music('4 2 1 4 1')
print(output)