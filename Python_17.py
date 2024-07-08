```
def music_check(note: str) -> int:
    note_map = {"A": 0, "B": 1, "C": 2, "D": 3, "E": 4, "F": 5, "G": 6}
    return note_map.get(note.upper(), -1)

def parse_music(music_string: str) -> list:
    result = []
    notes = music_string.split("|")
    for note in notes:
        if note.strip() != "":
            note = note.replace("o", "").strip()
            if note in map(str, note_map.values()):
                result.append(int(note))
            else:
                result.append(music_check(note))
    return result