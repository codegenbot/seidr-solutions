from typing import List

def parse_music(music_string: str) -> List[float]:
    durations = {"4": 4.0, "2": 2.0, "1": 1.0}
    return [float(note.strip()) for note in music_string.split(",")]

music_notes = input()
result = parse_music(music_notes)
print(result)