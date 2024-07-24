from typing import List


def parse_music(music_string: str) -> List[int]:
    music_string = input(
        "Enter music notes and rests (separated by spaces or commas): "
    )
    if not music_string:
        return []
    music_string = music_string.replace(",", " ")
    beats = music_string.strip()
    notes = {"o": 4, "o|": 2, ".|": 1}
    i = 0
    while i < len(beats):
        if beats[i] == "|":
            i += 1
        elif beats[i : i + 2] in notes:
            beats = beats.split()
            return [notes[note] for note in beats]
        else:
            return []