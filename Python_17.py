from typing import List

def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    
    valid_notes = all(note in notes_duration for note in music_string.split("|"))
    
    if not valid_notes:
        return []
    
    return [notes_duration[note] for note in music_string.split("|")]

music_string = input()
result = parse_music(music_string)
print(result)