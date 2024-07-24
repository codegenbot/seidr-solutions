from typing import List

def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    music_notes = music_string.strip().split()
    if all(note in notes_duration for note in music_notes):
        return [notes_duration[note] for note in music_notes]
    else:
        return [0]

music_string = input().strip()
result = parse_music(music_string)
print(result)