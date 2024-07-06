```
from typing import List


def parse_music(music_string: str) -> List[int]:
    beats_per_note = {'o': 4, 'o|': 2, '.|': 1}
    result = []
    i = 0
    while i < len(music_string):
        if music_string[i] == '.':
            if i+3 <= len(music_string) and music_string[i+1:i+3].lower() in beats_per_note:
                result.append(beats_per_note[music_string[i+1:i+3].lower()])
                i += 3
            else:
                while i < len(music_string) and music_string[i].isalnum():
                    note = ''
                    while i < len(music_string) and music_string[i].isalnum():
                        note += music_string[i]
                        i += 1
                    result.append(beats_per_note[note])
        else:
            while i < len(music_string) and music_string[i].isalnum():
                note = ''
                while i < len(music_string) and music_string[i].isalnum():
                    note += music_string[i]
                    i += 1
                if note.lower() in beats_per_note:
                    result.append(beats_per_note[note.lower()])
                else:
                    return []
    return result