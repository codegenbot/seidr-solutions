from typing import List

def parse_music(music_string: str) -> List[int]:
    return [4 if note == '4' else 2 if note == '2' else 1 for note in music_string.split()]

music_string = input()
output = parse_music(music_string)
print(output)