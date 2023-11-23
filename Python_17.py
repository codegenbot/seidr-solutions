from typing import List

def parse_music(music_string: str) -> List[int]:
    durations = {"4": 4, "2": 2, "1": 1}

    return [durations[note] for note in music_string.split(",") if note.strip() in durations]

music_notes = input("Enter music notes separated by commas: ")
result = parse_music(music_notes)
print(result)