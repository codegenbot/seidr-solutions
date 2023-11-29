from typing import List

def parse_music(music_string: str) -> List[int]:
    return [4 if note == 'o' else 2 if note.rstrip() == 'o|' else 1 if note.rstrip() == '---' else 0 for note in music_string.split()]