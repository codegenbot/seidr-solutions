from typing import List


def parse_music(music_string: str) -> List[int]:
    music_notes = []
    for note in music_string.split():
        if note == "o":
            music_notes.append(4)
        elif note == "o|":
            music_notes.append(2)
        elif note == ".|":
            music_notes.append(1)
    return music_notes