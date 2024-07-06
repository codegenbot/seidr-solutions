```
from typing import List

def parse_music(music_string: str) -> List[int]:
    beats = [0]
    notes = music_string.split()
    
    # Check if the input is in the expected format
    if len(notes) % 3 != 0:
        return []
        
    for i in range(0, len(notes), 3):
        note_type = notes[i][1]  # Assuming all notes start with a symbol and end with "|"
        beat_length = {
            "o": 4,
            "o|": 2,
            ".|": 1
        }[note_type]
        
        beats.append(beat_length)
    
    return beats[1:]