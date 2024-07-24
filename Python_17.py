from typing import List


def parse_music(music_string: str) -> List[int]:
    notes = {'o': 4, 'o|': 2, '.|': 1}
    beats = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '|':
            i += 1
        substring = music_string[i:i+2]
        if substring in notes:
            beats.append(notes[substring])
        else:
            return []  # or raise an exception, depending on the problem requirements
        i += 2
    return beats