```
from typing import List


def parse_music(music_string: str) -> List[int]:
    note_dict = {'o': 4, 'o|': 2, '.|': 1}
    music_list = [note_dict[note] for note in music_string.split()]
    return music_list