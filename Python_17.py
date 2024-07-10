from typing import List


def parse_music(music_string: str) -> List[int]:
    note_lengths = {"o": 4, "o|": 2, ".|": 1, ".": 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i:i+2] in note_lengths:
            result.append(note_lengths[music_string[i:i+2]])
            i += 2
        elif music_string[i] in note_lengths:
            result.append(note_lengths[str(music_string[i])])
            i += 1
        else:
            break
    return result