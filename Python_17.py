from typing import List

def parse_music(music_string: str) -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".": 1}
    notes = music_string.split()
    
    if len(notes) % 2 != 0:
        raise ValueError("Incorrect music string format")
    
    durations = []
    for i in range(0, len(notes), 2):
        note = notes[i]
        if len(note) == 0 or notes[i + 1] != "|":
            raise ValueError("Incorrect music string format")
        if note not in notes_duration:
            raise ValueError("Invalid note in music string")
        duration = notes_duration[note]
        durations.append(duration)
    
    return durations

try:
    music_string = input("Enter the music string: ")
    durations = parse_music(music_string)
    print(durations)
except ValueError as e:
    print(e)