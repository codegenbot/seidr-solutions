from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    music_list = []
    note = ''
    for char in music_string:
        if char in ['o', '|']:
            if note:
                if note == 'o':
                    music_list.append(beats_per_note[note])
                elif note == 'o|':
                    music_list.extend([beats_per_note[note]]*2)
                else:
                    raise ValueError("Invalid note")
            note = char
        elif char == '.':
            note += char
    if note:
        if note == 'o':
            music_list.append(beats_per_note[note])
        elif note == 'o|':
            music_list.extend([beats_per_note[note]]*2)
        else:
            raise ValueError("Invalid note")
    return music_list