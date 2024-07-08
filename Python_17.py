```
def check(note: str) -> int:
    note_map = {"A": 0, "B": 1, "C": 2, "D": 3, "E": 4, "F": 5, "G": 6}
    return note_map.get(note.upper(), -1)


def parse_music(music_string: str) -> list:
    result = []
    notes = music_string.replace("|", ",").replace(" ", "").split(",")
    for note in notes:
        if note.strip() != "":
            result.append(check(note.strip().upper()))
    return result


music = parse_music("o| .| o| .| o o| o o|")
assert check(music[0]) == 2
assert check(music[1]) == 1
assert check(music[2]) == 2
assert check(music[3]) == 1
assert check(music[4]) == 4
assert check(music[5]) == 2
assert check(music[6]) == 4
assert check(music[7]) == 2