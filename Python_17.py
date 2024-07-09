import re

def parse_music(music_string: str) -> List[int]:
    beats_per_note = {"o": 4, "o|": 2, ".|": 1}
    music_notes = []
    try:
        music_notes = re.split('\s+', music_string)
    except Exception as e:
        print(f"Error: {e}")
    
    return [beats_per_note.get(note, 0) for note in music_notes]