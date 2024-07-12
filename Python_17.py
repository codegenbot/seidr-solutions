from typing import List

def parse_music() -> List[int]:
    notes_duration = {"o": 4, "o|": 2, ".|": 1}
    music_notes = []
    while True:
        music_string = input()
        if music_string == "":
            break
        music_notes.extend([notes_duration[note] for note in music_string.split("|") if note in notes_duration])
    return music_notes

result = parse_music()
print(result)