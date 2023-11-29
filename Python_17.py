from typing import List
import sys

def parse_music() -> List[int]:
    music_string = sys.argv[1]
    return [4 if note == "o" else 2 if note == "o|" else 1 for note in music_string]