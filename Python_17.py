```
note_map = {"A": 0, "B": 1, "C": 2, "D": 3, "E": 4, "F": 5, "G": 6}
def music_check(note: str) -> int:
    return note_map.get(note.upper(), -1)

def parse_music(music_string: str) -> list:
    result = []
    notes = music_string.split("|")
    for note in notes:
        if note.strip() != "":
            note = note.replace("o", "").strip()
            if "-" in note:  # split notes by dashes
                note = str(music_check(note))
                while len(note) < 3:
                    note = "0" + note
                result.extend([str(int(note)) for i in note.split("-")])
            else:
                note = str(music_check(note))
                while len(note) < 3:
                    note = "0" + note
                result.append(int(note))
    return result