from typing import List

def parse_music(music_string: str) -> List[float]:
    durations = {"4": 1.0, "2": 0.5, "1": 0.25}
    return [durations[note.strip()] for note in music_string.split(",")]

music_notes = input("Enter a comma-separated list of music note durations: ")
result = parse_music(music_notes)
print(result)