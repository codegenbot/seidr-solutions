from typing import List

def parse_music() -> List[int]:
    music_string = input()
    return [2 if note == "o||" else 1 if note == "o|" else 4 if note == "o" else 0 for note in music_string]