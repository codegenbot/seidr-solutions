from typing import List


def parse_music(music_string: str) -> List[int]:
    music_notes = {"o": 4, "o|": 2, ".|": 1}
    beats_per_note = []

    for note in music_string.split():
        if note not in music_notes:
            return [f"Invalid input: {note}"]
        if note[-1] == "|":
            beats_per_note.append(music_notes[note[:-1]])
        else:
            beats_per_note.append(music_notes[note])

    return beats_per_note