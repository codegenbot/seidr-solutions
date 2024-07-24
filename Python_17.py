from typing import List

def get_user_input() -> str:
    return input().strip()

def parse_music(music_string: str) -> List[int]:
    notes = {"do": 4, "re": 2, "mi": 1}
    return [notes[note] for note in music_string.split()]

music_string = get_user_input()
result = parse_music(music_string)
print(result)