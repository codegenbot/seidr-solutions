from typing import List
import sys

def parse_music(music_string: str) -> List[int]:
    durations = {'4': 4, '2': 2, '1': 1}
    return [durations[note] for note in music_string.split()]

music_string = sys.stdin.readline().rstrip()
output = parse_music(music_string)
print(output)