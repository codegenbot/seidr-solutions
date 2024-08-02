from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            i += 3
        else:
            note = music_string[i:i+2]
            i += 2
            if note in beats_per_note:
                result.append(beats_per_note[note])
            elif note[0] == 'o':
                result.extend([beats_per_note['o'], 4])
            elif note[0] == '.':
                result.extend([1, 8])
    return result