from typing import List


def parse_music(music_string: str) -> List[int]:
    note_lengths = {"o": [4], "|": [2], ".|": [1]}
    result = []
    for note in music_string:
        if note in note_lengths:
            result += note_lengths[note]
        else:
            result.append(0)
    return result