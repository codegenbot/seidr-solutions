from typing import List

def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    notes = music_string.strip().split()
    
    for note in notes:
        if note not in notes_duration:
            return "Invalid input format"
    
    return [notes_duration[note] for note in notes]

music_string = input()
result = parse_music(music_string)
print(result)