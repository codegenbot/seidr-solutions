from typing import List

def parse_music(music_string: str) -> List[int]:
    durations = {"4": 4, "2": 2, "1": 1}

    if not music_string:
        return []

    return [durations[note] for note in music_string.split(",") if note in durations.keys()]

music_notes = input("Enter the music notes (comma-separated): ").strip()
result = parse_music(music_notes)
print(result)