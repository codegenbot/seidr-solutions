from typing import List

def parse_music(music_string: str) -> List[int]:
    notes = {"do": 4, "re": 2, "mi": 1}
    if all(note in notes for note in music_string.split()):
        return [notes[note] for note in music_string.split()]
    else:
        return []

music_string = input().strip()
if ' ' in music_string:
    result = parse_music(music_string)
    print(result)