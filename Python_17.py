from typing import List


def parse_music(music_string: str) -> List[int]:
    note_lengths = {"o": 4, "|": 2, ".|": 1}
    result = []
    i = 0
    while i < len(music_string):
        for j in range(1, 3):
            if i + j <= len(music_string) and music_string[i:i+j] in note_lengths:
                result.append(note_lengths[music_string[i:i+j]])
                i += j
                break
    return result