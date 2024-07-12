from typing import List

def parse_music() -> List[int]:
    music_string = input("Enter music notes separated by '|': ").strip()
    if not music_string:
        return []

    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    return [
        notes_duration.get(note, 0)
        for note in music_string.split("|")
    ]

result = parse_music()
print(result)