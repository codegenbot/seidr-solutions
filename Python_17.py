from typing import List


def parse_music(music_string: str) -> List[int]:
    beats = {"o": 4, ".": 2}
    result = []
    note_beat = ""
    for char in music_string:
        if char in beats:
            if note_beat:
                if len(note_beat) == 1:
                    result.extend([beats[char]] * int(len(note_beat)))
                elif len(note_beat) == 2:
                    result.append(beats[char])
                else:
                    result.append(beats[char] // 2)
                note_beat = ""
            note_beat += char
    return result