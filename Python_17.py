from typing import List

def parse_music(music_data: List[tuple]) -> List[int]:
    durations = {"o": 4, "o|": 2, ".|": 1}
    return [durations[note] for note, duration in music_data]