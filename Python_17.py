from typing import List


def parse_music() -> List[int]:
    durations = {"4": 4, "2": 2, "1": 1}
    music_string = input().rstrip()
    return [durations[note] for note in music_string.split()]


output = parse_music()
print(output)