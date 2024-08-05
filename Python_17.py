from typing import List

def parse_music(music_string: str) -> List[int]:
    durations = {"o": 4, "o|": 2, ".|": 1}
    notes = music_string.split("|")
    
    if notes[-1] != '':
        return []
    
    return [durations[note] for note in notes[:-1] if note in durations]