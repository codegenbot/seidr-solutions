from typing import List


def parse_music() -> List[int]:
    music_string = input("Enter the music string: ")
    return [4 if note == "o" else 2 if note == "o|" else 1 for note in music_string]