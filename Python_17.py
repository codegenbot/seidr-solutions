from typing import List

def parse_music(music_string: str) -> List[int]:
    durations = {"4": 4, "2": 2, "1": 1}
    if not music_string:
        return []
    return [durations[note] for note in music_string if note in durations]

result = parse_music(input())
print(result)