```
def check(temp: str) -> bool:
    for char in temp:
        if not char.isalpha() and not char.isdigit():
            return False
    return True


def parse_music(music_string: str) -> List[int]:
    result = []
    notes = music_string.split(',')

    for note in notes:
        if check(note):
            note_value = int(note.strip().split(' ')[1])
            result.append(note_value)
        else:
            break

    return result