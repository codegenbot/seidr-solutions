from typing import List


def parse_music() -> List[int]:
    music_notes = []
    n = int(input("Enter the number of notes: "))
    for i in range(n):
        note = input(f"Enter note {i+1}: ")
        if note == "o":
            music_notes.append(4)
        elif note == "o|":
            music_notes.append(2)
        else:
            music_notes.append(1)
    return music_notes