```
from typing import List


def parse_music(music_string: str) -> List[int]:
    music_list = []
    note_length = {
        'o': 4,
        'o|': 2,
        '.|': 1
    }
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            i += 3
        else:
            j = i + 1
            while j < len(music_string) and music_string[j].isdigit():
                j += 1
            beat_count = int(music_string[i+1:j])
            music_list.append(note_length[music_string[i:j]])
            i = j
    return music_list