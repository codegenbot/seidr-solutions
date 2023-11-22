from typing import List

def parse_music(music_string: str) -> List[int]:
    return [4 if 'o' in note else 2 if 'o|' in note else 1 for note in music_string.split()]

music_string = input()
result = parse_music(music_string)
result