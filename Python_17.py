from typing import List

def parse_music(music_string: str) -> List[int]:
    durations = {"4": 4, "2": 2, "1": 1}
    
    if not music_string or not isinstance(music_string, str):
        return []
    
    return [durations[note] for note in music_string.split(",") if note in durations]

result = parse_music("2,4,1")
print(result)