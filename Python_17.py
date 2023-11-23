from typing import List


def parse_music() -> List[int]:
    durations = {"4": 4, "2": 2, "1": 1}
    music_string = input()
    return [durations[note] for note in music_string.split()]


parse_music()