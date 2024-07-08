def check_notes(music_string: str) -> int:
    note_map = {"A": 0, "B": 1, "C": 2, "D": 3, "E": 4, "F": 5, "G": 6}
    return sum(note_map.get(note.upper(), -1) for note in music_string.split()) if any(note_map.get(note.upper(), -1) != -1 for note in music_string.split()) else -1

def check_scale(music_string: str) -> bool:
    notes = music_string.replace("o", "").replace("|", " ").split()
    return set(notes) == set(["A", "B", "C", "D", "E", "F", "G"])