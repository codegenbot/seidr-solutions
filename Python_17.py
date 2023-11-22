from typing import List

def parse_music() -> List[int]:
    music_string = input()
    return [4 if 'o|' in note else 2 if 'o' in note else 1 for note in music_string.split(':')]