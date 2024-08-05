from typing import List

def parse_music() -> List[int]:
    durations = {"o": 4, "o|": 2, ".|": 1}
    music_string = input().split()
    return [durations[note] for note in music_string]