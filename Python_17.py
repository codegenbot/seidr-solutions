from typing import List

def parse_music(music_string: str) -> List[int]:
    durations = {"4": 4, "2": 2, "1": 1}

    if not music_string:
        return []

    return [durations[note] for note in music_string.split(",") if note in durations.keys()]

# Read input from the user
music_notes = raw_input("Enter the music notes (comma-separated numbers): ")

# Call the function with the user input
result = parse_music(music_notes)
print(result)