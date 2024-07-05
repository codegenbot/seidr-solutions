from typing import List

def parse_music(music_string: str) -> List[int]:
    note_mapping = {'o': 4, 'o|': 2, '.|': 1}
    return [note_mapping[note] for note in music_string.split()]

music_string = input()
print(parse_music(music_string))